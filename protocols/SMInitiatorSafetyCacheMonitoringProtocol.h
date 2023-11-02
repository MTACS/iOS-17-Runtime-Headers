
@protocol SMInitiatorSafetyCacheMonitoringProtocol

@required

- (void)startMonitoringInitiatorSafetyCacheWithHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, SMCache *, SMCache *, NSDate *, NSDate *, NSError *, void*
- (void)stopMonitoringInitiatorSafetyCacheWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
