
@interface DOCTagCloudSource : NSObject {
    NSObject * _iCloudToken;
    NSUbiquitousKeyValueStore * _store;
    <DOCTagRegistryProtocol> * _tagRegistry;
    NSObject<OS_dispatch_queue> * _workingQueue;
}

@property (nonatomic, retain) NSObject *iCloudToken;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *store;
@property (nonatomic) <DOCTagRegistryProtocol> *tagRegistry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workingQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)iCloudTagSerialNumber;
- (long long)iCloudTagVersion;
- (id)iCloudTags;
- (id)iCloudTagsDictionary;
- (id)iCloudToken;
- (void)iCloudTokenWithCompletionBlock:(id /* block */)arg1;
- (id)initWithTagRegistry:(id)arg1;
- (void)isICloudAvailableWithCompletionBlock:(id /* block */)arg1;
- (void)kvsStoreDidChange:(id)arg1;
- (void)readTagsFromCloud:(bool)arg1;
- (void)setICloudToken:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setTagRegistry:(id)arg1;
- (id)store;
- (void)syncTagsWithCloud:(bool)arg1;
- (void)syncTagsWithCloud:(bool)arg1 isICloudAvailable:(bool)arg2;
- (id)tagRegistry;
- (void)ubiquityIdentityDidChange;
- (id)workingQueue;
- (void)writeTagsToCloud;

@end
