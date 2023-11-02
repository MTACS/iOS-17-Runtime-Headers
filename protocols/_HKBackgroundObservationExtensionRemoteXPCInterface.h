
@protocol _HKBackgroundObservationExtensionRemoteXPCInterface <_HKBackgroundObservationExtensionXPCInterface>

@required

- (void)backgroundObservationExtensionTimeWillExpire;
- (void)didReceiveUpdateForSampleType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: HKSampleType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performCleanup;

@end
