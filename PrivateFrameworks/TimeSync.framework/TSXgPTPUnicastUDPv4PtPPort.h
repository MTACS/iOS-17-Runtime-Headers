
@interface TSXgPTPUnicastUDPv4PtPPort : TSXgPTPFDPtPPort {
    NSNumber * _destinationIPv4Address;
}

@property (nonatomic, copy) NSNumber *destinationIPv4Address;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)arg1;
- (id)destinationIPv4Address;
- (void)setDestinationIPv4Address:(id)arg1;

@end
