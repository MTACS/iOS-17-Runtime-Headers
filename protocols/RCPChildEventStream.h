
@protocol RCPChildEventStream <RCPBaseEventStreamComposer>

@required

- (double)currentTimeOffset;
- (RCPEventEnvironment *)environment;
- (NSArray *)finalizeEventStream;
- (void)setCurrentTimeOffset:(double)arg1;
- (void)setEnvironment:(RCPEventEnvironment *)arg1;

@end
