
@interface _VNUnspecifiedOperationPoints : VNOperationPoints

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)getClassificationMetrics:(id*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3;
- (bool)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id*)arg4;
- (bool)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id*)arg4;
- (bool)getDefaultConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3;
- (bool)getPrecision:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4;
- (bool)getRecall:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
