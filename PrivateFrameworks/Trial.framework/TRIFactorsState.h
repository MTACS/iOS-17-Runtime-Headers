
@interface TRIFactorsState : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) TRIFactorsStateBMLTIdentifiers *bmltIdentifiers;
@property (nonatomic, readonly) TRIFactorsStateExperimentIdentifiers *experimentIdentifiers;
@property (nonatomic, readonly) TRIFactorsStateRolloutIdentifiers *rolloutIdentifiers;

+ (bool)supportsSecureCoding;

- (id)bmltIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentIdentifiers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersisted:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persisted;
- (id)rolloutIdentifiers;

@end
