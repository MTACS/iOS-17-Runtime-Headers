
@interface MTRGeneralDiagnosticsClusterNetworkInterface : NSObject <NSCopying> {
    NSData * _hardwareAddress;
    NSArray * _iPv4Addresses;
    NSArray * _iPv6Addresses;
    NSNumber * _isOperational;
    NSString * _name;
    NSNumber * _offPremiseServicesReachableIPv4;
    NSNumber * _offPremiseServicesReachableIPv6;
    NSNumber * _type;
}

@property (nonatomic, copy) NSData *hardwareAddress;
@property (nonatomic, copy) NSArray *iPv4Addresses;
@property (nonatomic, copy) NSArray *iPv6Addresses;
@property (nonatomic, copy) NSNumber *isOperational;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *offPremiseServicesReachableIPv4;
@property (nonatomic, copy) NSNumber *offPremiseServicesReachableIPv6;
@property (nonatomic, copy) NSNumber *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)hardwareAddress;
- (id)iPv4Addresses;
- (id)iPv6Addresses;
- (id)init;
- (id)isOperational;
- (id)name;
- (id)offPremiseServicesReachableIPv4;
- (id)offPremiseServicesReachableIPv6;
- (void)setHardwareAddress:(id)arg1;
- (void)setIPv4Addresses:(id)arg1;
- (void)setIPv6Addresses:(id)arg1;
- (void)setIsOperational:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOffPremiseServicesReachableIPv4:(id)arg1;
- (void)setOffPremiseServicesReachableIPv6:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
