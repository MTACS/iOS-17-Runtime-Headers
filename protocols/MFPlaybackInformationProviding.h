
@protocol MFPlaybackInformationProviding

@required

- (<MFQueuePlayerItem> *)currentItem;
- (long long)currentItemTransition;
- (long long)currentState;
- (double)currentTime;
- (float)effectiveRate;
- (long long)interruptedState;
- (NSArray *)nextItems;
- (float)rate;
- (float)targetRate;
- (NSNumber *)targetTime;
- (long long)timeControlStatus;
- (AVPlayerViewController *)videoViewController;

@end
