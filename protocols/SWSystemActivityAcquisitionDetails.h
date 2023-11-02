
@protocol SWSystemActivityAcquisitionDetails <NSObject>

@required

- (bool)afterFailingToRevertPendingSleep;
- (bool)afterPendingSleepWasAlreadyInitiated;
- (bool)afterSleepOfNonZeroDuration;

@end
