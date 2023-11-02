
@protocol RCPProgressEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (void)advanceProgressByDelta:(double)arg1 duration:(double)arg2;
- (double)frequency;
- (double)progress;
- (void)setFrequency:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)updateProgressTo:(double)arg1 duration:(double)arg2;

@end
