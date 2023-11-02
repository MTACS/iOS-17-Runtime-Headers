
@protocol HUISoundMeterListenerDelegate <NSObject>

@required

- (void)liveLevelMeteringDisplayStateChanged:(bool)arg1;
- (void)localSourceAvailableDidUpdate:(bool)arg1;
- (void)remoteSourceAvailableDidUpdate:(bool)arg1;
- (void)updateViewsWith:(double)arg1 fastLeq:(double)arg2 thresholdLevel:(unsigned long long)arg3;

@end
