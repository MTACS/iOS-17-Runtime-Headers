
@interface SPSecureLocationsSubscriptionResult : NSObject <NSCopying, NSSecureCoding> {
    double  _expiresIn;
    NSArray * _locations;
}

@property (nonatomic) double expiresIn;
@property (nonatomic, copy) NSArray *locations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)expiresIn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpiryTime:(double)arg1 locations:(id)arg2;
- (id)locations;
- (void)setExpiresIn:(double)arg1;
- (void)setLocations:(id)arg1;

@end
