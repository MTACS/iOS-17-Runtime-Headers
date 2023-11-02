
@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort {
    TSDgPTPUnicastUDPv6EtEPort * _implDC;
    TSXgPTPUnicastUDPv6EtEPort * _implXPC;
}

@property (nonatomic, readonly, copy) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)destinationIPv6Address;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;

@end
