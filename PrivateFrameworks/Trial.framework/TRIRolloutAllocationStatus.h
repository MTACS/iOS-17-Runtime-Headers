
@interface TRIRolloutAllocationStatus : NSObject <NSCopying, NSSecureCoding> {
    int  _deploymentId;
    NSDictionary * _factorPackIds;
    NSString * _rampId;
    NSString * _rolloutId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSDictionary *factorPackIds;
@property (nonatomic, readonly) NSString *rampId;
@property (nonatomic, readonly) NSString *rolloutId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (void)encodeWithCoder:(id)arg1;
- (id)factorPackIds;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2 rampId:(id)arg3 factorPackIds:(id)arg4;
- (id)rampId;
- (id)rolloutId;

@end
