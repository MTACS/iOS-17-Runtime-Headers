
@interface HMIVideoAnalyzerMutableReportComparison : HMFObject {
    long long  _falseNegative;
    NSArray * _falseNegativeKeys;
    long long  _falsePositive;
    NSArray * _falsePositiveKeys;
    float  _precision;
    float  _recall;
    long long  _truePositive;
    NSArray * _truePositiveKeys;
}

@property (readonly) long long falseNegative;
@property (readonly) NSArray *falseNegativeKeys;
@property (readonly) long long falsePositive;
@property (readonly) NSArray *falsePositiveKeys;
@property (readonly) float precision;
@property (readonly) float recall;
@property (readonly) long long truePositive;
@property (readonly) NSArray *truePositiveKeys;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (long long)falseNegative;
- (id)falseNegativeKeys;
- (long long)falsePositive;
- (id)falsePositiveKeys;
- (id)initWithTruePositiveKeys:(id)arg1 falseNegativeKeys:(id)arg2 falsePositiveKeys:(id)arg3 groupByKey:(bool)arg4;
- (float)precision;
- (float)recall;
- (long long)truePositive;
- (id)truePositiveKeys;

@end
