
@interface NISpatialBrowsingConfiguration : NIConfiguration {
    NSString * _deviceIdentifier;
    double  _maxNearbyObjectAge;
    bool  _responder;
    long long  _updatesPolicy;
}

@property (copy) NSString *deviceIdentifier;
@property double maxNearbyObjectAge;
@property (getter=isResponder) bool responder;
@property long long updatesPolicy;

+ (id)new;
+ (id)responderConfigurationWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isResponder;
- (double)maxNearbyObjectAge;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setMaxNearbyObjectAge:(double)arg1;
- (void)setResponder:(bool)arg1;
- (void)setUpdatesPolicy:(long long)arg1;
- (long long)updatesPolicy;

@end
