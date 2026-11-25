classdef tSumAbove < matlab.unittest.TestCase
    % Tests for the sumAbove MEX function.

    methods (Test)
        function sumsValuesAboveThreshold(testCase)
            opts = struct("Values", [1 5 -2 7], "Threshold", 2);
            testCase.verifyEqual(sumAbove(opts), 12);
        end
    end
end
