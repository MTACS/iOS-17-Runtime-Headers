
@interface TSgPTPUnicastLinkLayerEtEPort : TSgPTPFDEtEPort {
    TSDgPTPUnicastLinkLayerEtEPort * _implDC;
    TSXgPTPUnicastLinkLayerEtEPort * _implXPC;
}

@property (nonatomic, readonly, copy) NSData *destinationMACAddress;

+ (id)keyPathsForValuesAffectingDestinationMACAddress;

- (void).cxx_destruct;
- (id)destinationMACAddress;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;

@end
