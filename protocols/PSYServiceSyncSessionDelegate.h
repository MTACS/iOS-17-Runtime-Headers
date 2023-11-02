
@protocol PSYServiceSyncSessionDelegate <NSObject>

@required

- (void)syncSession:(PSYServiceSyncSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)syncSession:(PSYServiceSyncSession *)arg1 reportProgress:(double)arg2;
- (void)syncSessionDidComplete:(PSYServiceSyncSession *)arg1;
- (void)syncSessionDidCompleteSending:(PSYServiceSyncSession *)arg1;

@end
