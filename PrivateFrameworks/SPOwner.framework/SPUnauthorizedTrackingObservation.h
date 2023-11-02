
@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding> {
    long long  _action;
    NSUUID * _identifier;
    NSDate * _observedAt;
    NSArray * _observedLocations;
    SPUnauthorizedTrackingAdvertisement * _trackingIdentifier;
    long long  _type;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *observedAt;
@property (nonatomic, copy) NSArray *observedLocations;
@property (nonatomic, retain) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(long long)arg1 type:(long long)arg2 trackingIdentifier:(id)arg3 observedLocations:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)observedAt;
- (id)observedLocations;
- (void)setAction:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObservedAt:(id)arg1;
- (void)setObservedLocations:(id)arg1;
- (void)setTrackingIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (id)trackingIdentifier;
- (long long)type;

@end
