
@interface PXUpNextMemoriesGenerationRequest : NSObject {
    NSSet * _memoryLocalIdentifiersToAvoid;
    PLPhotoAnalysisServiceClient * _photoAnalysisServiceClient;
    PHPhotoLibrary * _photoLibrary;
    NSArray * _recentlyUsedAppleMusicSongIDs;
    NSArray * _recentlyUsedFlexSongIDs;
    PHMemory * _rootMemory;
    unsigned long long  _targetUpNextMemoryCount;
    bool  _wantsVerboseDebugInfo;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSSet *memoryLocalIdentifiersToAvoid;
@property (nonatomic, readonly) PLPhotoAnalysisServiceClient *photoAnalysisServiceClient;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSArray *recentlyUsedAppleMusicSongIDs;
@property (nonatomic, retain) NSArray *recentlyUsedFlexSongIDs;
@property (nonatomic, readonly) PHMemory *rootMemory;
@property (nonatomic, readonly) unsigned long long targetUpNextMemoryCount;
@property (nonatomic) bool wantsVerboseDebugInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)_fetchEphemeralMemoriesWithLocalIdentifiers:(id)arg1;
- (id)_fetchOverrideMemories;
- (id)fetchUpNextMemoriesWithError:(id*)arg1;
- (id)fetchUpNextMemoriesWithError:(id*)arg1 sharingFilter:(unsigned short)arg2;
- (id)init;
- (id)initWithRootMemory:(id)arg1 avoidMemoriesWithLocalIdentifiers:(id)arg2 targetUpNextMemoryCount:(unsigned long long)arg3 musicCurationParameters:(id)arg4;
- (id)memoryLocalIdentifiersToAvoid;
- (id)photoAnalysisServiceClient;
- (id)photoLibrary;
- (id)recentlyUsedAppleMusicSongIDs;
- (id)recentlyUsedFlexSongIDs;
- (id)rootMemory;
- (void)setRecentlyUsedAppleMusicSongIDs:(id)arg1;
- (void)setRecentlyUsedFlexSongIDs:(id)arg1;
- (void)setWantsVerboseDebugInfo:(bool)arg1;
- (void)startGenerationWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)targetUpNextMemoryCount;
- (bool)wantsVerboseDebugInfo;
- (id)workQueue;

@end
