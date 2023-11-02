
@interface TRIRolloutIdentifiers : NSObject <NSCopying> {
    int  _deploymentId;
    NSString * _factorPackId;
    NSString * _rampId;
    NSString * _rolloutId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *factorPackId;
@property (nonatomic, readonly) NSString *rampId;
@property (nonatomic, readonly) NSString *rolloutId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (id)factorPackId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2 factorPackId:(id)arg3;
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2 factorPackId:(id)arg3 rampId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRolloutIdentifiers:(id)arg1;
- (id)rampId;
- (id)rolloutId;

@end
