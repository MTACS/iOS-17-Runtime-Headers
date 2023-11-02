
@interface ADAdaptiveCorrectionPipelineParameters : NSObject {
    double  _epErrorLimitWidePix_FirstPass;
    double  _epErrorLimitWidePix_SecondPass;
    double  _errorVal_BetweenIntermediate_ExtremeMacro;
    double  _errorVal_GreaterThanInf;
    double  _errorVal_LessThanExtremeMacro;
    double  _extremeMacroDistMM;
    double  _intermediateMacroDistMM;
    int  _minPointsForAdjustment;
    double  _rangeOCxT;
    double  _rangeOCxW;
    double  _rangeOCyW;
    double  _rangePFL_T;
    double  _rangePFL_W;
    bool  _runAnalyticalPreconditioning;
    double  _spgEpsilon;
    float  _temporalFilteringStrength;
}

@property (nonatomic) double epErrorLimitWidePix_FirstPass;
@property (nonatomic) double epErrorLimitWidePix_SecondPass;
@property (nonatomic) double errorVal_BetweenIntermediate_ExtremeMacro;
@property (nonatomic) double errorVal_GreaterThanInf;
@property (nonatomic) double errorVal_LessThanExtremeMacro;
@property (nonatomic) double extremeMacroDistMM;
@property (nonatomic) double intermediateMacroDistMM;
@property (nonatomic) int minPointsForAdjustment;
@property (nonatomic) double rangeOCxT;
@property (nonatomic) double rangeOCxW;
@property (nonatomic) double rangeOCyW;
@property (nonatomic) double rangePFL_T;
@property (nonatomic) double rangePFL_W;
@property (nonatomic) bool runAnalyticalPreconditioning;
@property (nonatomic) double spgEpsilon;
@property (nonatomic) float temporalFilteringStrength;

- (double)epErrorLimitWidePix_FirstPass;
- (double)epErrorLimitWidePix_SecondPass;
- (double)errorVal_BetweenIntermediate_ExtremeMacro;
- (double)errorVal_GreaterThanInf;
- (double)errorVal_LessThanExtremeMacro;
- (double)extremeMacroDistMM;
- (double)intermediateMacroDistMM;
- (int)minPointsForAdjustment;
- (double)rangeOCxT;
- (double)rangeOCxW;
- (double)rangeOCyW;
- (double)rangePFL_T;
- (double)rangePFL_W;
- (bool)runAnalyticalPreconditioning;
- (void)setEpErrorLimitWidePix_FirstPass:(double)arg1;
- (void)setEpErrorLimitWidePix_SecondPass:(double)arg1;
- (void)setErrorVal_BetweenIntermediate_ExtremeMacro:(double)arg1;
- (void)setErrorVal_GreaterThanInf:(double)arg1;
- (void)setErrorVal_LessThanExtremeMacro:(double)arg1;
- (void)setExtremeMacroDistMM:(double)arg1;
- (void)setIntermediateMacroDistMM:(double)arg1;
- (void)setMinPointsForAdjustment:(int)arg1;
- (void)setRangeOCxT:(double)arg1;
- (void)setRangeOCxW:(double)arg1;
- (void)setRangeOCyW:(double)arg1;
- (void)setRangePFL_T:(double)arg1;
- (void)setRangePFL_W:(double)arg1;
- (void)setRunAnalyticalPreconditioning:(bool)arg1;
- (void)setSpgEpsilon:(double)arg1;
- (void)setTemporalFilteringStrength:(float)arg1;
- (double)spgEpsilon;
- (float)temporalFilteringStrength;

@end
