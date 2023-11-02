
@interface BRCPrivateClientZone : BRCClientZone {
    NSMutableSet * _appLibraries;
    BRCCreateZoneAndSubscribeOperation * _createZoneOperation;
    NSObject<OS_dispatch_queue> * _createZoneQueue;
    BRCAppLibrary * _defaultAppLibrary;
    NSMutableArray * _faultsLiveBarriers;
    NSMutableArray * _lastResets;
    NSMapTable * _pcsChainFolderOperations;
    BRCProblemReport * _problemReport;
    NSMutableArray * _syncBarriers;
    NSMutableArray * _zoneCreationCompletionBlocks;
    BRCServerZoneHealthState * _zoneHealthState;
}

@property (nonatomic, readonly) NSSet *appLibraries;
@property (nonatomic, readonly) NSSet *appLibraryIDs;
@property (nonatomic, readonly) BRCAppLibrary *defaultAppLibrary;
@property (nonatomic, readonly) bool hasDefaultAppLibrary;
@property (nonatomic, readonly) bool isDocumentScopePublic;
@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;
@property (nonatomic, readonly) BRCPrivateServerZone *privateServerZone;
@property (nonatomic, readonly) bool resetFrequencyIsTooHigh;
@property (nonatomic, readonly) bool zoneHealthNeedsSyncUp;
@property (nonatomic, readonly) BRCServerZoneHealthState *zoneHealthState;

- (void).cxx_destruct;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 reason:(id)arg3 result:(bool*)arg4;
- (void)_createCloudKitZoneWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)addAppLibrary:(id)arg1;
- (void)addAppLibrary:(id)arg1 offline:(bool)arg2;
- (id)appLibraries;
- (id)appLibraryIDs;
- (id)asPrivateClientZone;
- (void)clearProblemReport;
- (void)close;
- (void)createCloudKitZoneWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)defaultAppLibrary;
- (bool)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(bool)arg2 error:(id*)arg3;
- (bool)dumpTablesToContext:(id)arg1 includeAllItems:(bool)arg2 error:(id*)arg3;
- (id)fetchZoneRootItemInDB:(id)arg1;
- (bool)hasDefaultAppLibrary;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(bool)arg6;
- (bool)isDocumentScopePublic;
- (bool)isPrivateZone;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id /* block */)arg2;
- (bool)parentIDHasLiveUnchainedChildren:(id)arg1;
- (id)pcsChainOperationForItemID:(id)arg1;
- (unsigned int)pcsChainStateForItem:(id)arg1;
- (id)plist;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (id)privateServerZone;
- (bool)recomputeAppSyncBlockState;
- (void)registerPCSChainingOperation:(id)arg1;
- (void)removeAppLibrary:(id)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (bool)resetFrequencyIsTooHigh;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)resume;
- (id)rootItemID;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (void)setServerZone:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (void)syncedDownZoneHealthState:(id)arg1;
- (id)unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)zoneHealthNeedsSyncUp;
- (id)zoneHealthState;
- (void)zoneHealthWasReset;

@end
