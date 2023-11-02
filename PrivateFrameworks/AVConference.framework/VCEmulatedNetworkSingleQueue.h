
@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue * _networkQueue;
}

- (void)dealloc;
- (id)initWithPolicies:(id)arg1;
- (void)push:(id)arg1;
- (void)runUntilTime:(double)arg1;

@end
