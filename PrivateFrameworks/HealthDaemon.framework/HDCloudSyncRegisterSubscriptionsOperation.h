
@interface HDCloudSyncRegisterSubscriptionsOperation : HDCloudSyncOperation {
    CKContainer * _container;
    NSDictionary * _subscriptions;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 container:(id)arg3 subscriptions:(id)arg4;
- (void)main;

@end
