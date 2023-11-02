
@interface CPLEngineSyncTask : NSObject {
    bool  _cancelled;
    <CPLEngineSyncTaskDelegate> * _delegate;
    CPLEngineLibrary * _engineLibrary;
    bool  _forceSync;
    bool  _foreground;
    bool  _hasFinishedTask;
    NSDate * _lastChangeDateForPhaseDescription;
    NSString * _phaseDescription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _phaseDescriptionLock;
    CPLSyncSession * _session;
    <CPLEngineStoreUserIdentifier> * _transportUserIdentifier;
}

@property (getter=isCancelled, setter=_setCancelled:) bool cancelled;
@property (retain) <CPLEngineSyncTaskDelegate> *delegate;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic) bool forceSync;
@property (nonatomic) bool foreground;
@property (copy) NSString *phaseDescription;
@property (nonatomic, readonly) NSArray *scopesForTask;
@property (nonatomic, readonly) CPLSyncSession *session;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic, retain) <CPLEngineStoreUserIdentifier> *transportUserIdentifier;

+ (id)taskWithEngineLibrary:(id)arg1 session:(id)arg2;

- (void).cxx_destruct;
- (void)_setCancelled:(bool)arg1;
- (void)cancel;
- (id)delegate;
- (id)description;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (bool)forceSync;
- (bool)foreground;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (bool)isCancelled;
- (void)launch;
- (void)launchTransportTask:(id)arg1 withTransportGroup:(id)arg2;
- (id)phaseDescription;
- (id)phaseDescriptionLastChangeDate:(id*)arg1;
- (id)scopesForTask;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (void)setPhaseDescription:(id)arg1;
- (void)setTransportUserIdentifier:(id)arg1;
- (void)taskDidFinishWithError:(id)arg1;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (id)taskIdentifier;
- (id)transportUserIdentifier;

@end
