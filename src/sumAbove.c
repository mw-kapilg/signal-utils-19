/* sumAbove.c - sum of the values above a threshold.
 *   S = sumAbove(OPTS) where OPTS is a struct with fields
 *   "values" (double array) and "threshold" (double scalar).
 */
#include "mex.h"

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
    const mxArray *values = mxGetField(prhs[0], 0, "values");
    const mxArray *threshold = mxGetField(prhs[0], 0, "threshold");
    double *x = mxGetPr(values);
    mwSize n = mxGetNumberOfElements(values);
    double t = mxGetScalar(threshold);
    double s = 0.0;
    mwSize i;

    for (i = 0; i < n; i++) {
        if (x[i] > t) {
            s += x[i];
        }
    }
    plhs[0] = mxCreateDoubleScalar(s);
}
