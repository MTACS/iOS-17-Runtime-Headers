
@protocol BLSAssertionServiceResponding <BLSAsserting>

@required

- (oneway void)serviceDidAcquire;
- (oneway void)serviceDidCancelWithError:(NSError *)arg1;
- (oneway void)serviceDidPause;
- (oneway void)serviceDidResume;
- (oneway void)serviceFailedToAcquireWithError:(NSError *)arg1;
- (oneway void)serviceWillCancel;

@end
