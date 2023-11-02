
@protocol CACTouchEventObserverDelegate

@required

- (void)didObserveFirstTouchDownForObserver:(CACTouchEventObserver *)arg1;
- (void)didObserveLastTouchUpForObserver:(CACTouchEventObserver *)arg1;

@end
