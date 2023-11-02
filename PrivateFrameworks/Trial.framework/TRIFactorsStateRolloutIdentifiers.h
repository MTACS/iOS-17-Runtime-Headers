
@interface TRIFactorsStateRolloutIdentifiers : NSObject <NSCopying> {
    int  _deploymentId;
    NSString * _rolloutId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *rolloutId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentifiers:(id)arg1;
- (id)rolloutId;

@end
