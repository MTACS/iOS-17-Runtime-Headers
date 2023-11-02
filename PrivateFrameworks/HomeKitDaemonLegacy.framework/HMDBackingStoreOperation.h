
@interface HMDBackingStoreOperation : NSOperation <HMFLogging> {
    id /* block */  _operationFinishBlock;
    NSUUID * _operationUUID;
    id /* block */  _resultBlock;
    HMDBackingStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ operationFinishBlock;
@property (nonatomic, readonly) NSUUID *operationUUID;
@property (nonatomic, copy) id /* block */ resultBlock;
@property (nonatomic, retain) HMDBackingStore *store;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithResultBlock:(id /* block */)arg1;
- (id)logIdentifier;
- (void)main;
- (id)mainReturningError;
- (id /* block */)operationFinishBlock;
- (id)operationUUID;
- (id /* block */)resultBlock;
- (void)setOperationFinishBlock:(id /* block */)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
