
@interface VCPClusterer : NSObject {
    unsigned long long  _accumulatedChangesCount;
    NSURL * _cacheDirUrl;
    NSURL * _cacheFileUrl;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    VNClustererBuilder * _clusterBuilder;
    unsigned long long  _clustererBringUpState;
    NSString * _clusteringType;
    VCPPhotosFaceProcessingContext * _context;
    struct { 
        unsigned long long countOfEligibleFaces; 
        unsigned long long countOfFacesPendingToAdd; 
        bool isClustering; 
        bool rebuildRequired; 
    }  _currentStatusSnapshot;
    bool  _currentStatusSnapshotIsValid;
    NSLock * _currentStatusSnapshotLock;
    VCPSuggestionRequest * _currentSuggestionRequest;
    NSSet * _faceCSNsInClusterCache;
    NSMutableSet * _faceCSNsToRemove;
    NSMutableSet * _faceIdStrsToAdd;
    unsigned long long  _nextClusterTriggeringAccumulatedChangesCount;
    unsigned long long  _nextSeqNum;
    NSMutableArray * _outstandingSuggestionRequests;
    VCPPhotosPersistenceDelegate * _persistenceDelegate;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_group> * _processingGroup;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSMutableDictionary * _propertyDictionary;
    NSLock * _propertyDictionaryLock;
    bool  _rebuildClusterer;
    NSLock * _suggestionLock;
    NSNumber * _threshold;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebase;
    NSDate * _timestampOfLastClusterComparison;
    VNCanceller * _visionCanceler;
}

@property (nonatomic) unsigned long long clustererBringUpState;
@property (nonatomic, readonly) unsigned long long clustererState;
@property (nonatomic, readonly) bool needsFullSync;
@property (nonatomic, readonly) bool needsUpdate;
@property (getter=isReady, nonatomic, readonly) bool ready;

+ (bool)removeClusteringStateCacheWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_bringUpStateDescription:(unsigned long long)arg1;
- (void)_cancelClusteringAndRestoreClusterCache:(bool)arg1;
- (id)_faceTorsoprintsFromFaceCSNs:(id)arg1;
- (id)_faceTorsoprintsFromFaceIdentifiers:(id)arg1 assignClusterSeqNumberIfNeeded:(bool)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4;
- (id)_faceTorsoprintsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(bool)arg2 updatedFaces:(id)arg3;
- (bool)_performAndPersistClustersWithFaceTorsoprintsToAdd:(id)arg1 groupingIdentifiersToAdd:(id)arg2 faceTorsoprintsToRemove:(id)arg3 updatedFaces:(id)arg4 cancelOrExtendTimeoutBlock:(id /* block */)arg5 error:(id*)arg6;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id*)arg1 lastClusterSequenceNumber:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(bool)arg3 excludedL0ClustersByL1ClusterId:(id*)arg4 cancelOrExtendTimeoutBlock:(id /* block */)arg5 error:(id*)arg6;
- (bool)_processingQueuePerformForcedFaceClustering:(bool)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id*)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3;
- (bool)_processingQueueResetClusterCache:(id*)arg1;
- (bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(bool)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id*)arg4;
- (bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2;
- (bool)_processingQueueSaveClusterCache:(id*)arg1;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2;
- (id)_propertyDictionaryFileURL;
- (void)_readPropertyDictionary;
- (void)_recordClusterRebuildRequired:(bool)arg1;
- (void)_recordClusteringState:(bool)arg1;
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordCurrentStatus:(struct { unsigned long long x1; unsigned long long x2; bool x3; bool x4; })arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_removeEmptyGroups;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (id)_resolveConflictingL0ClustersFromVNClusters:(id)arg1 excludedL0ClustersByL1ClusterId:(id*)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id*)arg3;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2;
- (void)cancelAllSuggestionRequests;
- (void)cancelClustering;
- (void)cancelSuggestionRequest:(id)arg1;
- (void)clusterAndWaitWithCancelOrExtendTimeoutBlock:(id /* block */)arg1;
- (unsigned long long)clusterCount;
- (void)clusterIfNecessaryAndWaitWithCancelOrExtendTimeoutBlock:(id /* block */)arg1;
- (unsigned long long)clusteredFaceCount;
- (unsigned long long)clustererBringUpState;
- (unsigned long long)clustererState;
- (id)differencesBetweenClusterCacheAndLibrary:(id*)arg1 excludedL0ClustersByL1ClusterId:(id*)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id*)arg3;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id*)arg3;
- (bool)getClusters:(id*)arg1 threshold:(double*)arg2 utilizingGPU:(bool*)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4 error:(id*)arg5;
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;
- (bool)isReady;
- (bool)isReadyToReturnSuggestions;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id*)arg2;
- (bool)needsFullSync;
- (bool)needsUpdate;
- (unsigned long long)numberOfAccumulatedClusterChanges;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(id /* block */)arg3 error:(id*)arg4;
- (unsigned long long)restoreClusterCacheAndSyncWithLibrary:(bool)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (void)setClustererBringUpState:(unsigned long long)arg1;
- (id)status;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id*)arg2;
- (void)terminate;

@end
