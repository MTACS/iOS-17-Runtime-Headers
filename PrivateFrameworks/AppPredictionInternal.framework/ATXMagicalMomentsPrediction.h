
@interface ATXMagicalMomentsPrediction : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSString * _predictionIdentifier;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *predictionIdentifier;

+ (id)convertPredictionsToPMMPredictionItems:(id)arg1 reason:(unsigned int)arg2 anchor:(long long)arg3 triggerEvent:(id)arg4;
+ (long long)mmAnchorToPMMAnchor:(long long)arg1;
+ (long long)mmReasonToPMMReason:(unsigned int)arg1;
+ (id)pmmMetadataForDuetEvent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(double)arg1 predictionIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predictionIdentifier;

@end
