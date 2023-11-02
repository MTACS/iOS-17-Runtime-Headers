
@interface MTRGeneralDiagnosticsClusterNetworkInterfaceType : MTRGeneralDiagnosticsClusterNetworkInterface

@property (nonatomic, copy) NSData *hardwareAddress;
@property (nonatomic, copy) NSArray *iPv4Addresses;
@property (nonatomic, copy) NSArray *iPv6Addresses;
@property (nonatomic, copy) NSNumber *isOperational;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *offPremiseServicesReachableIPv4;
@property (nonatomic, copy) NSNumber *offPremiseServicesReachableIPv6;
@property (nonatomic, copy) NSNumber *type;

@end
