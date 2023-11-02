
@interface HMDDatabase : HMFObject <HMBCloudDatabaseDelegate, HMBLocalDatabaseDelegate, HMDDatabase, HMDDatabaseZoneDelegate, HMFLogging> {
    HMBCloudDatabase * _cloudDatabase;
    NSHashTable * _delegates;
    bool  _hasStarted;
    HMBLocalDatabase * _localDatabase;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSMapTable * _zoneDelegatesByLocalZone;
}

@property (readonly) HMBCloudDatabase *cloudDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property bool hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalDatabase *localDatabase;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (readonly) NSMapTable *zoneDelegatesByLocalZone;

+ (id)cameraClipsDatabase;
+ (id)defaultDatabase;
+ (id)defaultLocalDatabaseFileURL;
+ (id)logCategory;
+ (void)registerQueries;

- (void).cxx_destruct;
- (id)acceptInvitation:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2;
- (id)cloudDatabase;
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;
- (id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
- (void)cloudZone:(id)arg1 didChangeRebuildStatus:(id)arg2;
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;
- (void)cloudZone:(id)arg1 didUpdateParticipantWithClientIdentifier:(id)arg2;
- (id)delegates;
- (id)existingPrivateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)existingSharedZoneIDWithName:(id)arg1;
- (bool)hasStarted;
- (id)initWithFileURL:(id)arg1 cloudConfiguration:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventSubmitter:(id)arg3;
- (id)localDatabase;
- (void)localDatabase:(id)arg1 detectedLocalCorruptionWithInfo:(id)arg2;
- (void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
- (void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (id)mergedActionFutureForActionFutures:(id)arg1;
- (void)performDelegateCallback:(id /* block */)arg1;
- (void)performZoneDelegateCallback:(id /* block */)arg1 forLocalZone:(id)arg2;
- (id)privateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)removeLocalAndCloudDataForLocalZone:(id)arg1;
- (id)removePrivateZonesWithName:(id)arg1;
- (id)removeSharedZonesWithName:(id)arg1;
- (void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2;
- (id)removeZonesWithID:(id)arg1 isPrivate:(bool)arg2;
- (void)setHasStarted:(bool)arg1;
- (id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (void)start;
- (id)synchronizeSharedZones;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)zoneDelegatesByLocalZone;
- (id)zonesWithID:(id)arg1 isPrivate:(bool)arg2 shouldCreate:(bool)arg3 configuration:(id)arg4 delegate:(id)arg5 error:(id*)arg6;

@end
