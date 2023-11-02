
@protocol FaceTimeMessageStore.MessageStoreControllerXPCHostProtocol

@required

- (void)addMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _TtC20FaceTimeMessageStore7Message *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC20FaceTimeMessageStore7Message *, NSError *, void*
- (<_FTMSMessageStoreControllerClientDelegate> *)delegate;
- (void)deleteMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getAccountStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getMessageCountWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getMessagesWithQuery:(void *)arg1 pageSize:(void *)arg2 page:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: _TtC20FaceTimeMessageStore10XPCWrapper *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)isTranscriptionEnabledWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)pingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveMessageToPhotoLibraryWithMessageUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <_FTMSMessageStoreControllerClientDelegate>)arg1;
- (void)updateMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
