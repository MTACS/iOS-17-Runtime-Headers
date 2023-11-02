
@interface GEOTileGroupActivationSession : NSObject <GEOPListStateCapturing, NSProgressReporting> {
    NSSet * _activeScales;
    NSSet * _activeScenarios;
    GEOActiveTileGroup * _activeTileGroup;
    bool  _canceled;
    GEOResourceManifestConfiguration * _configuration;
    GEODataSetDescription * _dataSet;
    <GEOTileGroupActivationSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _environmentName;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSArray * _mandatoryMigrationTasks;
    NSArray * _migrators;
    GEOTileGroup * _newTileGroup;
    NSArray * _opportunisticMigrationTasks;
    unsigned long long  _phase;
    NSProgress * _progress;
    GEOResources * _resourceManifest;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _started;
    unsigned long long  _stateCaptureHandle;
    id  _transaction;
    NSString * _uniqueIdentifier;
    long long  _updateType;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2 tileGroup:(id)arg3 inResourceManifest:(id)arg4 environmentName:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8 dataSet:(id)arg9 migrators:(id)arg10 updateType:(long long)arg11 delegate:(id)arg12 delegateQueue:(id)arg13;
- (id)progress;
- (void)start;
- (id)uniqueIdentifier;

@end
