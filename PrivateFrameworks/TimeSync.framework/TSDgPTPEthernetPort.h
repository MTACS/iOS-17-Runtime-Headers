
@interface TSDgPTPEthernetPort : TSDgPTPFDPtPPort

+ (id)diagnosticInfoForService:(id)arg1;

- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (int)portType;
- (id)propertiesForXPC;

@end
