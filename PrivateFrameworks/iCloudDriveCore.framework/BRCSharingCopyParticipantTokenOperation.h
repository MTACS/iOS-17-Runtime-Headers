
@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSString * _baseToken;
    CKRecordID * _contentRecordID;
    NSError * _error;
    bool  _iWorkShareable;
    bool  _isChildOfShare;
    NSString * _participantDocumentToken;
    NSString * _participantKey;
    CKRecordID * _shareID;
    bool  _shouldFetchParticipantDocumentToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithResult:(id)arg1 participantKey:(id)arg2;
- (void)_fetchBaseTokenWithCompletion:(id /* block */)arg1;
- (void)_fetchParticipantDocumentTokenWithCompletion:(id /* block */)arg1;
- (void)_fetchParticipantKeyWithCompletion:(id /* block */)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;

@end
