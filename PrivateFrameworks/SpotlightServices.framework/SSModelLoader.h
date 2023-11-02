
@interface SSModelLoader : NSObject {
    NSMutableSet * _pendingUpdates;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableSet *pendingUpdates;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)assetDirectoryPathForType:(unsigned long long)arg1 forUpdate:(bool)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasPendingUpdates;
- (id)init;
- (void)moveNewlyPackagedAssets:(id)arg1;
- (id)pendingUpdates;
- (id)queue;
- (void)removeAssetsForType:(unsigned long long)arg1 group:(id)arg2;
- (void)removeAssetsWithName:(id)arg1;
- (void)setPendingUpdates:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unpackageModelAssets:(id)arg1 assetName:(id)arg2 completion:(id /* block */)arg3;
- (void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4 completion:(id /* block */)arg5;

@end
