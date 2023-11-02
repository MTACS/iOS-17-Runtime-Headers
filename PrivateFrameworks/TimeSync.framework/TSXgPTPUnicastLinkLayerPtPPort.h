
@interface TSXgPTPUnicastLinkLayerPtPPort : TSXgPTPFDPtPPort {
    NSData * _destinationMACAddress;
}

@property (nonatomic, copy) NSData *destinationMACAddress;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)arg1;
- (id)destinationMACAddress;
- (void)setDestinationMACAddress:(id)arg1;

@end
