
@interface _MDExtensionLoader : NSObject {
    NSMutableArray * _containerIDs;
    NSMutableArray * _containerPaths;
    NSMutableArray * _extensionIdentifiers;
    NSDictionary * _extensionsByBundleId;
    bool  _extensionsCacheNeedsLoad;
    NSDictionary * _fileProviderBundleMap;
    id  _matchingContext;
    long long  _notificationCount;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queueLabels;
}

@property (nonatomic, retain) NSMutableArray *containerIDs;
@property (nonatomic, retain) NSMutableArray *containerPaths;
@property (nonatomic, retain) NSMutableArray *extensionIdentifiers;
@property (nonatomic, retain) NSDictionary *extensionsByBundleId;
@property bool extensionsCacheNeedsLoad;
@property (nonatomic, retain) NSDictionary *fileProviderBundleMap;
@property (nonatomic, retain) id matchingContext;
@property (nonatomic) long long notificationCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *queueLabels;

- (void).cxx_destruct;
- (id)containerIDs;
- (id)containerPaths;
- (id)extensionIdentifiers;
- (id)extensionsByBundleId;
- (bool)extensionsCacheNeedsLoad;
- (id)fileProviderBundleMap;
- (void)findExtensionsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)matchingContext;
- (long long)notificationCount;
- (id)queue;
- (id)queueLabels;
- (void)setContainerIDs:(id)arg1;
- (void)setContainerPaths:(id)arg1;
- (void)setExtensionIdentifiers:(id)arg1;
- (void)setExtensionsByBundleId:(id)arg1;
- (void)setExtensionsCacheNeedsLoad:(bool)arg1;
- (void)setFileProviderBundleMap:(id)arg1;
- (void)setMatchingContext:(id)arg1;
- (void)setNotificationCount:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueLabels:(id)arg1;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(id /* block */)arg1;
- (void)stopLookingForExtensions;

@end
