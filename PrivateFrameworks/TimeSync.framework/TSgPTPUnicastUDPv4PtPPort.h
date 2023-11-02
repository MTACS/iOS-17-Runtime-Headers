
@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort {
    TSDgPTPUnicastUDPv4PtPPort * _implDC;
    TSXgPTPUnicastUDPv4PtPPort * _implXPC;
}

@property (nonatomic, readonly, copy) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)destinationIPv4Address;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;

@end
