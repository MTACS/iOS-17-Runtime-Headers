
@interface VNClassificationObservation : VNObservation {
    VisionCoreClassificationMetrics * _classificationMetrics;
    VNOperationPointsProvider * _historicallyEncodedOperationPointsProvider;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2;
- (bool)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2;
- (bool)hasPrecisionRecallCurve;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 identifier:(id)arg2 confidence:(float)arg3;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 identifier:(id)arg2 confidence:(float)arg3 classificationMetrics:(id)arg4;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 classificationMetrics:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)vn_cloneObject;

@end
