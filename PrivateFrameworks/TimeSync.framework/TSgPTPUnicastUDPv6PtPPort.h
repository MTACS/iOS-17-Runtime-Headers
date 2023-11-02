
@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort {
    TSDgPTPUnicastUDPv6PtPPort * _implDC;
    TSXgPTPUnicastUDPv6PtPPort * _implXPC;
}

@property (nonatomic, readonly, copy) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)destinationIPv6Address;
- (id)initWithImplXPC:(id)arg1;
- (id)initWithimplDC:(id)arg1;

@end
