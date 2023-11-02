
@interface TSXgPTPUnicastUDPv6PtPPort : TSXgPTPFDPtPPort {
    NSData * _destinationIPv6Address;
}

@property (nonatomic, copy) NSData *destinationIPv6Address;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)arg1;
- (id)destinationIPv6Address;
- (void)setDestinationIPv6Address:(id)arg1;

@end
