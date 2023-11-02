
@interface GEOUserSession : NSObject {
    GEOAPSessionData * _fifteenMoDeviceSessionData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fifteenMoDeviceSessionLock;
    NSMutableDictionary * _longSessionByAppID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _longSessionLock;
    bool  _longSessionNeedsInit;
    GEOAPNavSessionData * _navSessionData;
    NSData * _navigationDirectionsID;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _navigationSessionID;
    double  _navigationSessionStartTime;
    NSData * _previousNavigationDirectionsID;
    double  _previousNavigationSessionEndTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _previousNavigationSessionID;
    double  _previousNavigationSessionStartTime;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shareSessionWithMaps;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _shortNavSessionLock;
    bool  _shortNavSessionNeedsInit;
    int  _shortSessionChangedToken;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _shortSessionID;
    double  _shortSessionStartTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _zeroSessionID;
}

@property (nonatomic, copy) GEOUserSessionEntity *mapsShortSession;
@property (nonatomic, copy) GEOUserSessionEntity *mapsUserSessionEntity;
@property (nonatomic, readonly) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } navSessionID;
@property (nonatomic) bool shareSessionWithMaps;

+ (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })_newSessionId;
+ (id)highBytesStringFromSession:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
+ (bool)initialShareSessionWithMaps;
+ (id)lowBytesStringFromSession:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)mapsUnifiedBundleId;
+ (void)setInitialShareSessionWithMaps:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_15moSyncEnabled;
- (void)_accessLongSessionValuesInBlock:(id /* block */)arg1;
- (double)_currentTime;
- (void)_currentTimeResult:(id /* block */)arg1;
- (void)_generateNewNavSessionIDAtTime:(double)arg1;
- (void)_get15MoUserSessionDataOnQueue:(id)arg1 callback:(id /* block */)arg2;
- (id)_get15moDeviceRawSessionData;
- (unsigned long long)_get15moDeviceSessionConfiguredEpoch;
- (id)_get15moDeviceSessionData;
- (unsigned long long)_get15moUserSessionConfiguredEpoch;
- (double)_get15moUserSessionCreateDateInUse;
- (double)_get15moUserSessionPreviousExpirationDateInUse;
- (id)_getLocalSessionDatas;
- (double)_getMapsUserStartDate;
- (id)_getMy15moUserSessionData;
- (id)_getPersistedLongSessionData;
- (id)_getPersistedNavSessionData;
- (bool)_hasGoodTimeSync;
- (bool)_hasMapsUserStartDate;
- (void)_initializeLongSessionData;
- (void)_initializeShortAndNavData;
- (void)_mapsShortSessionValues:(id /* block */)arg1;
- (void)_mapsSyncGet15MoSessionDataFromCache:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_mapsSyncRemovePersisted15MoSessionData:(id)arg1 completion:(id /* block */)arg2;
- (void)_mapsSyncSave15MoSessionData:(id)arg1 completion:(id /* block */)arg2;
- (id)_mapsUserSessionEntity;
- (double)_preferredSessionStartDateDerivedFromMapsUserStartDate:(double)arg1 currentDate:(double)arg2;
- (void)_processMapsAppDeletion;
- (void)_remove15MoUserSessionData:(id)arg1 onQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)_resetShortSessionID;
- (void)_saveSharedSessionDataByAppId:(id)arg1;
- (void)_set15MoUserSessionData:(id)arg1 onQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)_set15moDeviceSessionData:(id)arg1;
- (void)_set15moUserSessionCreateDateInUse:(double)arg1;
- (void)_set15moUserSessionPreviousExpirationDateInUse:(double)arg1;
- (void)_setLocalSessionDatas:(id)arg1;
- (void)_setMapsUserStartDate:(double)arg1;
- (void)_setMy15moUserSessionData:(id)arg1;
- (void)_setPersistedLongSessionData:(id)arg1;
- (void)_setPersistedNavSessionData:(id)arg1;
- (void)_setShortSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1 sessionCreateTime:(double)arg2;
- (id)_sharedSessionDataByAppId;
- (void)_shortSessionValues:(id /* block */)arg1;
- (bool)_updateNavSessionIDAtTime:(double)arg1;
- (void)_warmMapsSyncCacheWithResult:(id /* block */)arg1;
- (void)connectionToMapsSyncDaemon:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)endNavigationSession;
- (void)fifteenMonthCloudSyncMapsUserStartDateOnQueue:(id)arg1 valuesBlock:(id /* block */)arg2;
- (void)fifteenMonthCloudSyncSessionValuesOnQueue:(id)arg1 valuesBlock:(id /* block */)arg2;
- (void)fifteenMonthDeviceSessionValues:(id /* block */)arg1;
- (bool)fifteenMonthUserSessionInitialized;
- (void)fifteenMonthUserSessionValuesOnQueue:(id)arg1 valuesBlock:(id /* block */)arg2;
- (id)init;
- (id)longSessionAppIdForActualAppId:(id)arg1;
- (void)longSessionValuesForAppId:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)mapsSessionEntityWithCallback:(id /* block */)arg1 shareSessionIDWithMaps:(bool)arg2 resetSession:(bool)arg3;
- (id)mapsShortSession;
- (id)mapsUserSessionEntity;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })navSessionID;
- (void)pauseNavigationWithRouteID:(id)arg1;
- (void)resetLongSessionValuesForAppId:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)resumeNavigationWithRouteID:(id)arg1;
- (void)setMapsShortSession:(id)arg1;
- (void)setMapsUserSessionEntity:(id)arg1;
- (void)setShareSessionWithMaps:(bool)arg1;
- (void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(bool)arg2;
- (bool)shareSessionWithMaps;
- (void)shortAndNavSessionValues:(id /* block */)arg1;
- (void)shortSessionValues:(id /* block */)arg1;
- (bool)shouldSuppressSession;
- (void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2;
- (void)startNavigationWithRouteID:(id)arg1 isEVRoute:(bool)arg2;
- (void)terminateNavigationWithRouteID:(id)arg1;

@end
