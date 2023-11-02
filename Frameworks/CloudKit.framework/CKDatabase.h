
@interface CKDatabase : NSObject {
    CKContainer * _container;
    CKDatabaseImplementation * _implementation;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) long long databaseScope;
@property (readonly, copy) NSString *hmbDescription;
@property (nonatomic, readonly) CKDatabaseImplementation *implementation;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) long long scope;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (void)addOperation:(id)arg1;
- (void)clearRecordCache;
- (id)container;
- (long long)databaseScope;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)implementation;
- (id)init;
- (id)initInternalWithImplementation:(id)arg1 container:(id)arg2;
- (id)operationQueue;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)scope;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (void)hd_addOperationObserver:(id)arg1 queue:(id)arg2;
+ (void)hd_removeOperationObserver:(id)arg1;

- (void)hd_addOperation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

- (id)hmbDescription;

@end
