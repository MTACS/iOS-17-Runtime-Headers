
@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation {
    HMDBackingStoreCacheGroup * _record;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) HMDBackingStoreCacheGroup *record;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (id)record;
- (id)serverChangeToken;
- (void)setRecord:(id)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
