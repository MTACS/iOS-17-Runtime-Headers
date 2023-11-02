
@interface CTTrafficDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSString * _appCategory;
    NSString * _bundleId;
    NSString * _dnn;
    NSString * _host;
    NSNumber * _ipProtocol;
    NSNumber * _port;
    NSNumber * _portRangeLow;
    NSNumber * _portRangeUpper;
    NSNumber * _trafficClass;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *appCategory;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *dnn;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSNumber *ipProtocol;
@property (nonatomic, retain) NSNumber *port;
@property (nonatomic, retain) NSNumber *portRangeLow;
@property (nonatomic, retain) NSNumber *portRangeUpper;
@property (nonatomic, retain) NSNumber *trafficClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)appCategory;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dnn;
- (void)encodeWithCoder:(id)arg1;
- (id)host;
- (id)initWithCoder:(id)arg1;
- (id)ipProtocol;
- (id)port;
- (id)portRangeLow;
- (id)portRangeUpper;
- (void)setAddress:(id)arg1;
- (void)setAppCategory:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setDnn:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setIpProtocol:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setPortRangeLow:(id)arg1;
- (void)setPortRangeUpper:(id)arg1;
- (void)setTrafficClass:(id)arg1;
- (id)trafficClass;

@end
