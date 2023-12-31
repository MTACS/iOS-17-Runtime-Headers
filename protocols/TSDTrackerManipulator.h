
@protocol TSDTrackerManipulator

@required

- (bool)allowTrackerManipulatorToTakeControl:(NSObject<TSDTrackerManipulator> *)arg1;
- (void)operationDidEnd;
- (bool)readyToEndOperation;
- (NSObject<TSDLayoutManipulatingTracker> *)tracker;

@optional

- (void)didRelinquishControl;
- (void)operationWillEnd;
- (void)trackerManipulatorDidTakeControl:(NSObject<TSDTrackerManipulator> *)arg1;
- (void)willTakeControl;

@end
