
@interface MLPrecisionRecallCurve : NSObject <NSSecureCoding> {
    NSArray * _precisionConfidenceThresholds;
    NSArray * _precisionValues;
    NSArray * _recallConfidenceThresholds;
    NSArray * _recallValues;
}

@property (nonatomic, readonly) NSArray *precisionConfidenceThresholds;
@property (nonatomic, readonly) NSArray *precisionValues;
@property (nonatomic, readonly) NSArray *recallConfidenceThresholds;
@property (nonatomic, readonly) NSArray *recallValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrecisionValues:(id)arg1 precisionConfidenceThresholds:(id)arg2 recallValues:(id)arg3 recallConfidenceThresholds:(id)arg4;
- (id)precisionConfidenceThresholds;
- (id)precisionValues;
- (id)recallConfidenceThresholds;
- (id)recallValues;

@end
