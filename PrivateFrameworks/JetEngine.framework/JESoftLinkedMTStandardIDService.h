
@interface JESoftLinkedMTStandardIDService : NSObject {
    MTStandardIDService * _backing;
}

@property (nonatomic, retain) MTStandardIDService *backing;

- (void).cxx_destruct;
- (id)backing;
- (id)idFieldsForTopic:(id)arg1;
- (id)idFieldsForTopic:(id)arg1 options:(id)arg2;
- (id)initWithAMSBag:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)mtPromiseToAMSPromise:(id)arg1;
- (void)performMaintenanceWithCompletion:(id /* block */)arg1;
- (void)queryIDForTopic:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)resetIDForTopics:(id)arg1;
- (id)secretValueForNamespace:(id)arg1 options:(id)arg2;
- (void)setBacking:(id)arg1;
- (id)sync;

@end
