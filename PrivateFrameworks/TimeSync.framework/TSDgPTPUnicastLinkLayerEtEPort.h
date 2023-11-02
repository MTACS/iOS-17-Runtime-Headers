
@interface TSDgPTPUnicastLinkLayerEtEPort : TSDgPTPFDEtEPort {
    NSData * _destinationMACAddress;
}

@property (nonatomic, readonly, copy) NSData *destinationMACAddress;

+ (id)diagnosticInfoForService:(id)arg1;

- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationMACAddress;
- (id)_sourceAddressString;
- (id)destinationMACAddress;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (int)portType;
- (id)propertiesForXPC;

@end
