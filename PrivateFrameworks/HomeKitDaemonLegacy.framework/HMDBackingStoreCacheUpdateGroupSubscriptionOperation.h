
@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation : HMDBackingStoreOperation {
    HMDBackingStoreCacheGroup * _record;
    CKRecordZoneSubscription * _subscription;
}

@property (nonatomic, retain) HMDBackingStoreCacheGroup *record;
@property (nonatomic, retain) CKRecordZoneSubscription *subscription;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 subscription:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (id)record;
- (void)setRecord:(id)arg1;
- (void)setSubscription:(id)arg1;
- (id)subscription;

@end
