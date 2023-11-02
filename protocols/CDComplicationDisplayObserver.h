
@protocol CDComplicationDisplayObserver <NSObject>

@required

- (void)complicationDisplay:(id <CDComplicationDisplay>)arg1 renderStatsWithTime:(double)arg2 cost:(double)arg3;
- (void)complicationDisplayNeedsResize:(id <CDComplicationDisplay>)arg1;

@end
