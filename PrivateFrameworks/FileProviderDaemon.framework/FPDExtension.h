
@interface FPDExtension : FPDProvider <FPDPushMessageDelegate> {
    NSExtension * _extension;
    LSApplicationExtensionRecord * _extensionRecord;
    NSObject<OS_dispatch_queue> * _sharedSessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly) LSApplicationExtensionRecord *extensionRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (readonly) Class superclass;

+ (id)allocForIdentifier:(id)arg1;
+ (id)instanceWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;
+ (id)instanceWithExtension:(id)arg1 queue:(id)arg2 volumeManager:(id)arg3;
+ (id)instanceWithExtensionRecord:(id)arg1 queue:(id)arg2 server:(id)arg3;
+ (id)instanceWithExtensionRecord:(id)arg1 queue:(id)arg2 volumeManager:(id)arg3;

- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)arg1;
- (id)asAppExtensionBackedProvider;
- (id)customPushTopics;
- (void)didReceiveMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)extension;
- (id)extensionRecord;
- (id)initWithExtension:(id)arg1 extensionRecord:(id)arg2 queue:(id)arg3 server:(id)arg4 volumeManager:(id)arg5;
- (bool)isAppExtensionReachable;
- (bool)isEqual:(id)arg1;
- (void)reindexAllSearchableItemsForRequest:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setExtension:(id)arg1;
- (id)sharedSessionQueue;

@end
