
@protocol SMReceiverMonitorProtocol

@required

- (void)startMonitoringReceiverSafetyCacheWithHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, SMCache *, SMCache *, NSError *, void*
- (void)startMonitoringReceiverSessionStatusWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, SMReceiverSessionStatus *, NSError *, void*
- (void)stopMonitoringReceiverSafetyCacheWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopMonitoringReceiverSessionStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
