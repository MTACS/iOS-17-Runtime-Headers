
@interface GEOOfflineStateManager : NSObject <GEOConfigChangeListenerDelegate, GEODataURLSessionTaskDelegate, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOPListStateCapturing, RadiosPreferencesDelegate> {
    NSDictionary * _acceptableDurations;
    NSObject<OS_dispatch_queue> * _connectivityCheckQueue;
    GEODataURLSessionTask * _connectivityCheckTask;
    unsigned int  _currentIndex;
    geo_isolater * _isolator;
    struct Result { 
        double timestamp; 
        struct { 
            int type; 
            union { 
                int raw; 
                int tile; 
                int placeRequest; 
            } subtype; 
        } request; 
        unsigned long long status; 
        unsigned long long usedInterfaces; 
        int requestMode; 
    }  _lastNetworkState;
    double  _lastStateUpdate;
    double  _lastUpdateWriteTime;
    bool  _needsStateUpdate;
    NSObject<OS_dispatch_queue> * _radioPrefsQueue;
    RadiosPreferences * _radiosPrefs;
    unsigned long long  _stateCaptureHandle;
    NSMutableDictionary * _statesByCohortId;
    int  _subscriptionsChangedNotifyToken;
    struct vector<(anonymous namespace)::Result, std::allocator<(anonymous namespace)::Result>>="__begin_"^{Result {}  _trackedRequests;
    double  _updateInterval;
    NSObject<OS_dispatch_source> * _updateStateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)activeStateForCohortId:(id)arg1;
+ (bool)isCohortAllowed:(id)arg1;
+ (bool)isOfflineAvailable;
+ (id)shared;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_networkStateChanged;
- (void)_offlineAvailabilityUpdated;
- (void)_receivedHeartbeat:(id)arg1;
- (unsigned long long)activeStateForCohortId:(id)arg1;
- (void)airplaneModeChanged;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)checkConnectivityForPeer:(id)arg1;
- (bool)cohortId:(id)arg1 shouldAttemptFailoverForRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2;
- (unsigned long long)currentStateForCohortId:(id)arg1;
- (unsigned long long)currentSuggestedStateForCohortId:(id)arg1;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dealloc;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (void)reportResponse:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 usedInterfaces:(unsigned long long)arg2 requestMode:(int)arg3 forCohortId:(id)arg4 duration:(double)arg5 error:(id)arg6;
- (void)reportTileResponse:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 usedInterfaces:(unsigned long long)arg2 forCohortId:(id)arg3 duration:(double)arg4 error:(id)arg5;
- (unsigned long long)savedStateForCohortId:(id)arg1;
- (void)setSavedState:(unsigned long long)arg1 forCohortId:(id)arg2;
- (void)setState:(unsigned long long)arg1 savedState:(unsigned long long)arg2 forCohortId:(id)arg3;
- (unsigned long long)subscriptionCount;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;
- (void)waitForTransitionToActiveState:(id /* block */)arg1 forCohortId:(id)arg2 timeout:(double)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;

@end
