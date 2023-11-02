
@interface PGPrecisionRecallEvaluation : NSObject {
    NSString * _category;
    unsigned long long  _falseNegatives;
    unsigned long long  _falsePositives;
    NSString * _identifier;
    unsigned long long  _trueNegatives;
    unsigned long long  _truePositives;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned long long falseNegatives;
@property (nonatomic, readonly) unsigned long long falsePositives;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long trueNegatives;
@property (nonatomic, readonly) unsigned long long truePositives;

- (void).cxx_destruct;
- (id)category;
- (id)csvHeader;
- (id)description;
- (void)evaluateWithGroundTruthResult:(bool)arg1 andInferenceResult:(bool)arg2;
- (void)evaluateWithGroundTruthResults:(id)arg1 andInferenceResults:(id)arg2;
- (double)fMeasure;
- (double)fMeasure:(double)arg1;
- (unsigned long long)falseNegatives;
- (unsigned long long)falsePositives;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 category:(id)arg2;
- (id)initWithIdentifier:(id)arg1 category:(id)arg2 truePositives:(unsigned long long)arg3 falsePositives:(unsigned long long)arg4 falseNegatives:(unsigned long long)arg5 trueNegatives:(unsigned long long)arg6;
- (double)precision;
- (double)recall;
- (unsigned long long)trueNegatives;
- (unsigned long long)truePositives;

@end
