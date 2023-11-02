
@interface PKReplicaManager : NSObject {
    bool  _dirtyTokenSet;
    NSMutableDictionary * _replicaEntries;
    NSMutableArray * _replicaManagerErrors;
    NSMutableOrderedSet * _replicaUUIDs;
    id /* block */  _saveStateBlock;
    bool  _shouldPersist;
    bool  _testMode;
    NSObject<OS_dispatch_queue> * _uuidAccessQueue;
}

@property (nonatomic, readonly) NSArray *replicaManagerErrors;
@property (nonatomic) bool testMode;

+ (id)sharedReplicaManager;

- (void).cxx_destruct;
- (void)_applicationWillTerminate;
- (void)_loadState;
- (void)_resetAllReplicaUUIDs;
- (void)_saveStateImmediately;
- (void)_scheduleSaveState;
- (void)_setReplicasDirtyToken;
- (id)checkoutReplicaUUIDForDrawing:(id)arg1;
- (id)description;
- (id)init;
- (bool)isValidBundleIDForSaving:(id)arg1;
- (void)persistIfNeeded;
- (id)replicaManagerErrors;
- (void)returnReplicaForDrawing:(id)arg1;
- (void)setTestMode:(bool)arg1;
- (bool)testMode;
- (void)updateVersionForDrawing:(id)arg1;

@end
