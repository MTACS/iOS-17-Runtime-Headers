
@interface CKMovePhotosOperation : CKDatabaseOperation <CKMovePhotosOperationCallbacks> {
    NSArray * _moveChanges;
    NSDictionary * _moveChangesByDestinationRecordID;
    NSDictionary * _moveChangesBySourceRecordID;
    id /* block */  _movePhotosCompletionBlock;
    id /* block */  _perRecordMoveBlock;
    id /* block */  _perRecordProgressBlock;
    NSMutableDictionary * _recordErrorsBySourceRecordID;
    CKDatabase * _sourceDatabase;
}

@property (nonatomic, readonly) <CKMovePhotosOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSArray *moveChanges;
@property (nonatomic, retain) NSDictionary *moveChangesByDestinationRecordID;
@property (nonatomic, retain) NSDictionary *moveChangesBySourceRecordID;
@property (nonatomic, copy) id /* block */ movePhotosCompletionBlock;
@property (nonatomic, readonly) CKMovePhotosOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perRecordMoveBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrorsBySourceRecordID;
@property (nonatomic, retain) CKDatabase *sourceDatabase;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_trackAssetsToUpload;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleDeleteForRecordID:(id)arg1 error:(id)arg2;
- (void)handleMoveForSourceRecordID:(id)arg1 destinationMetadata:(id)arg2 moveMarkerMetadata:(id)arg3 error:(id)arg4;
- (void)handleRecordIDsInFlight:(id)arg1 reply:(id /* block */)arg2;
- (void)handleRecordModificationForRecordID:(id)arg1 didProgress:(double)arg2;
- (void)handleRecordUploadForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 signature:(id)arg4 size:(unsigned long long)arg5 paddedFileSize:(unsigned long long)arg6 uploaded:(bool)arg7 uploadReceipt:(id)arg8 uploadReceiptExpiration:(double)arg9 wrappedAssetKey:(id)arg10 clearAssetKey:(id)arg11 referenceSignature:(id)arg12;
- (void)handleSaveForRecordID:(id)arg1 recordMetadata:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithMoveChanges:(id)arg1 sourceDatabase:(id)arg2;
- (id)moveChanges;
- (id)moveChangesByDestinationRecordID;
- (id)moveChangesBySourceRecordID;
- (id /* block */)movePhotosCompletionBlock;
- (id /* block */)perRecordMoveBlock;
- (id /* block */)perRecordProgressBlock;
- (void)performCKOperation;
- (id)recordErrorsBySourceRecordID;
- (void)setMoveChanges:(id)arg1;
- (void)setMoveChangesByDestinationRecordID:(id)arg1;
- (void)setMoveChangesBySourceRecordID:(id)arg1;
- (void)setMovePhotosCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordMoveBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setRecordErrorsBySourceRecordID:(id)arg1;
- (void)setSourceDatabase:(id)arg1;
- (id)sourceDatabase;

@end
