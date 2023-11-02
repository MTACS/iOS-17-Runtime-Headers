
@interface ICLightweightMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding> {
    ICLightweightMusicSubscriptionStatus * _lightweightSubscriptionStatus;
}

@property (nonatomic, readonly, copy) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithExtendedSubscriptionStatusResponse:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lightweightSubscriptionStatus;

@end
