
@protocol CHSensorDataProtocol

@required

- (void)aggregatedMotionAndAppLaunchDataFromDate:(void *)arg1 toDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)embeddingVectorForBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHAppLaunchSensorData *, NSError *, void*

@end
