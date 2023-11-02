
@protocol HMDUserDataControllerTimerCreator

@required

- (HMFTimer *)createExponentialBackoffTimerForZoneFetch;

@end
