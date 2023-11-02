
@interface WiFiP2PAWDLStateMonitorConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _options;
    NSArray * _servicesRequiringAvailabilityNotification;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSArray *servicesRequiringAvailabilityNotification;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (id)servicesRequiringAvailabilityNotification;
- (void)setOptions:(unsigned long long)arg1;
- (void)setServicesRequiringAvailabilityNotification:(id)arg1;

@end
