
@interface VCEmulatedNetworkDoubleQueueReorder : VCEmulatedNetworkDoubleQueue {
    double  _correlation;
    int  _gap;
    double  _probability;
    int  _reorderGap;
    int  _state;
    bool  _useMarkovModel;
}

- (void)dealloc;
- (id)initWithPolicies:(id)arg1;
- (void)push:(id)arg1;
- (bool)shouldSendPacketImmediatelyMM;

@end
