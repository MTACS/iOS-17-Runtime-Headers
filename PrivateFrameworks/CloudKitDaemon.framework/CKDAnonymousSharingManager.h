
@interface CKDAnonymousSharingManager : NSObject {
    CKDContainer * _container;
    NSObject<OS_dispatch_queue> * _synchronizeQueue;
    CKDZonePCSData * _zonePCSData;
}

@property (nonatomic, readonly) CKDContainer *container;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (nonatomic, retain) CKDZonePCSData *zonePCSData;

- (void).cxx_destruct;
- (id)_generateHashIdentifierForAnonymousShareTuple:(id)arg1;
- (void)_lockedFetchSystemZonePCSDataWithCompletion:(id /* block */)arg1;
- (void)_locked_decryptShareTuple:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_locked_encryptShareTuples:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)addAnonymousSharesToSharedDB:(id)arg1 operation:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)container;
- (void)decryptShareTuple:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)encryptShareTuples:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)initWithContainer:(id)arg1;
- (id)pcsCache;
- (void)removeAnonymousSharesFromSharedDB:(id)arg1 operation:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)setZonePCSData:(id)arg1;
- (id)synchronizeQueue;
- (id)zonePCSData;

@end
