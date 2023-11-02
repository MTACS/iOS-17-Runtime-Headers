
@interface TSDgPTPUnicastUDPv6EtEPort : TSDgPTPFDEtEPort {
    NSData * _destinationIPv6Address;
}

@property (nonatomic, readonly, copy) NSData *destinationIPv6Address;

+ (id)diagnosticInfoForService:(id)arg1;

- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationIPv6Address;
- (id)_sourceAddressString;
- (id)destinationIPv6Address;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (int)portType;
- (id)propertiesForXPC;

@end
