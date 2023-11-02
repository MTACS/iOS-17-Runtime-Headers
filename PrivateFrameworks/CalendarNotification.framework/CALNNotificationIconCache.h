
@interface CALNNotificationIconCache : NSObject <CALNIconCache> {
    <CalIconProvider> * _iconProvider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CalIconProvider> *iconProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)_iconCacheDirectory;
+ (id)_pathForCachedIconWithIdentifier:(id)arg1;
+ (id)iconCacheDirectory;
+ (id)pathForCachedIconWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2;
- (bool)_createCacheDirectoryIfNeeded;
- (bool)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)cachedIconPathForIconIdentifier:(id)arg1;
- (bool)forceRemoveAllCachedIconsWithError:(id*)arg1;
- (id)iconIdentifierForCachedIconPath:(id)arg1;
- (id)iconProvider;
- (id)initWithIconProvider:(id)arg1;
- (id)queue;
- (bool)removeIconWithIdentifier:(id)arg1 error:(id*)arg2;

@end
