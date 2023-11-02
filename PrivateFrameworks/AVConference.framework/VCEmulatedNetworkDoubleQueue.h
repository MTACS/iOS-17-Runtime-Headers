
@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue * _networkQueueA;
    VCEmulatedNetworkQueue * _networkQueueB;
}

- (void)dealloc;
- (id)initWithPolicies:(id)arg1;
- (void)push:(id)arg1;
- (void)runUntilTime:(double)arg1;

@end
