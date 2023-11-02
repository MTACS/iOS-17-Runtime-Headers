
@interface TRIRolloutDeployment : NSObject <NSCopying, NSSecureCoding> {
    int  _deploymentId;
    NSString * _rolloutId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *rolloutId;
@property (nonatomic, readonly) NSString *shortDesc;

+ (id)deploymentWithRolloutId:(id)arg1 deploymentId:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementRolloutId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeployment:(id)arg1;
- (id)rolloutId;
- (id)shortDesc;
- (id)taskTag;

@end
