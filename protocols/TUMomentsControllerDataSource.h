
@protocol TUMomentsControllerDataSource <NSObject>

@required

- (<TUMomentsControllerDataSourceDelegate> *)delegate;
- (void)discardVideoMessageWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)endRecordingMessageWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)endRequestWithTransactionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invalidate;
- (void)prewarmAudioClientWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (int)processIdentifier;
- (NSString *)processName;
- (void)registerStreamToken:(void *)arg1 requesterID:(void *)arg2 remoteIDSDestinations:(void *)arg3 remoteMomentsAvailable:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUMomentsCapabilities *, NSError *, void*
- (void)resetVideoMessagingWithSessionUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveVideoMessageWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendVideoMessageWithUUID:(void *)arg1 callUUID:(void *)arg2 toHandles:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSUUID *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <TUMomentsControllerDataSourceDelegate>)arg1;
- (void)startRecordingMessageWithMediaType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)startRequestWithMediaType:(void *)arg1 forStreamToken:(void *)arg2 requesteeID:(void *)arg3 destinationID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: int, long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)unregisterStreamToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
