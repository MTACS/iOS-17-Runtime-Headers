
@protocol TRAArbiterObserver <NSObject>

@optional

- (void)arbiter:(TRAArbiter *)arg1 didCompleteUpdateWithContext:(TRAArbiterUpdateContext *)arg2;
- (void)arbiter:(TRAArbiter *)arg1 willBeginUpdateWithContext:(TRAArbiterUpdateContext *)arg2;

@end
