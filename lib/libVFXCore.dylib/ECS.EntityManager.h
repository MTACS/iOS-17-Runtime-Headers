
@interface ECS.EntityManager : _TtCs12_SwiftObject {
    void _entries;
    void _invalidated;
    void activeStatesPerEffects;
    void allComponentDataChunks;
    void allEntityClasses;
    void applicationInBackground;
    void asyncQueue;
    void backgroundingSignalLock;
    void chunkStorageLock;
    void chunkTable;
    void clientID;
    void clock;
    void commandQueues;
    void componentRegistry;
    void copyGroup;
    void copyQueue;
    void currentState;
    void didBeginTransactionAtLastFrame;
    void entityCapacity;
    void entityCount;
    void entityFamilies;
    void firstFreeIndex;
    void generationSalt;
    void groupsCount;
    void hasRunloopTransaction;
    void imguiEnabled;
    void isInAuthoringMode;
    void isInPrepare;
    void isVFX2;
    void lastNonIdleState;
    void lock;
    void lockChunksOnQueryForEach;
    void logger;
    void measureIndexes;
    void name;
    void nextFrameBlocks;
    void nextFrameBlocksLock;
    void peerPid;
    void peerTaskIdentity;
    void queryManager;
    void recycledChunksData;
    void recycledChunksDataHistory;
    void relations;
    void runtimeThread;
    void sceneComponentStorage;
    void sceneInBackground;
    void scheduler;
    void shouldNotifyEntityEvent;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signpostID;
    void stateDidChangeFn;
    void syncLock;
    void transactionDepth;
    void updateHandlerIndex;
    void updateQueue;
    void workerComponentStorage;
}

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;

@end
