
@protocol PXDisplayLinkProtocol <NSObject>

@required

- (double)currentMediaTime;
- (double)duration;
- (unsigned long long)frameRateRangeType;
- (unsigned int)highFrameRateReason;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)paused;
- (long long)preferredFramesPerSecond;
- (SEL)selector;
- (void)setFrameRateRangeType:(unsigned long long)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPaused:(bool)arg1;
- (id)target;
- (double)targetTimestamp;
- (double)timestamp;

@end
