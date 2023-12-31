
@interface TSRootMeanSquaredTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {
    double * _rmstie;
}

@property (nonatomic, readonly, copy) NSArray *rmstie;

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;

- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (void)dealloc;
- (bool)exportAnalysisToDirectoryURL:(id)arg1;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (id)initWithTimeErrorValues:(id)arg1;
- (id)rmstie;
- (id)rmstieFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;

@end
