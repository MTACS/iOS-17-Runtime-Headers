
@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>

@required

- (<PCInterfaceUsabilityMonitorDelegate> *)delegate;
- (bool)isRadioHot;
- (void)setDelegate:(id <PCInterfaceUsabilityMonitorDelegate>)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(bool)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end
