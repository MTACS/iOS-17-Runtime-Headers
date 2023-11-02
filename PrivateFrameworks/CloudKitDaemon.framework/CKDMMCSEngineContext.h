
@interface CKDMMCSEngineContext : NSObject {
    CKDMMCS * _MMCS;
    struct _mmcs_engine { } * _MMCSEngine;
    NSString * _applicationBundleID;
    NSMutableIndexSet * _inMemoryItemsIDs;
    unsigned int  _maxChunkCountForSection;
    NSObject<OS_dispatch_queue> * _mmcsQueue;
    NSString * _path;
    long long  _refCount;
    _Atomic unsigned long long  _serializedThread;
    long long  _state;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { }*MMCSEngine;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSMutableIndexSet *inMemoryItemsIDs;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) long long refCount;
@property (nonatomic) long long state;

+ (id)_appID;
+ (bool)hasCachedCKDMMCSEngineContextForPath:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(bool*)arg3 error:(id*)arg4;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (bool)tearDownMMCSEngineWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCS;
- (struct _mmcs_engine { }*)MMCSEngine;
- (void)MMCSRunSerialized:(id /* block */)arg1;
- (void)MMCSSerializeAsyncRecursive:(id /* block */)arg1;
- (void)MMCSSerializeSyncRecursive:(id /* block */)arg1;
- (bool)_setupMMCSEngineWithError:(id*)arg1;
- (bool)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id*)arg2;
- (void)_tearDownMMCSEngine;
- (id)applicationBundleID;
- (void)assertMMCSSerialized;
- (void)cancelRequestWithContext:(void*)arg1;
- (void)dealloc;
- (long long)decRefCount;
- (id)description;
- (id)inMemoryItemsIDs;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;
- (unsigned int)maxChunkCountForSection;
- (unsigned long long)nextAvailableItemID;
- (id)path;
- (long long)refCount;
- (void)setApplicationBundleID:(id)arg1;
- (void)setInMemoryItemsIDs:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMMCSEngine:(struct _mmcs_engine { }*)arg1;
- (void)setMaxChunkCountForSection:(unsigned int)arg1;
- (void)setPath:(id)arg1;
- (void)setRefCount:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)stopTrackingItemID:(unsigned long long)arg1;

@end
