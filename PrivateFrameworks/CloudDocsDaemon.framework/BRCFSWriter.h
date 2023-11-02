
@interface BRCFSWriter : NSObject <BRCModule> {
    bool  _isCancelled;
    NSObject<OS_dispatch_queue> * _serialQueue;
    BRCAccountSession * _session;
    _Atomic int  _suspendCount;
    brc_task_tracker * _taskTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;

+ (bool)_isPathMatchIdle:(const struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg1;
+ (bool)_shouldForceApplyMetadataForItem:(id)arg1;

- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (unsigned int)_computeDesiredVersionOptionsForDocument:(id)arg1 createdReservedItem:(bool)arg2;
- (int)_computeURLMatchWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5 urlMatch:(struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg6;
- (id)_generateGentlePhysicalBounceNameForPathMatch:(const struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg1 dirfd:(int)arg2 existingSourceLogicalName:(id)arg3 lastBounceNo:(unsigned long long*)arg4;
- (void)_handleClashingItemIfNecessary:(id)arg1 parentID:(id)arg2 si:(id)arg3;
- (void)_scheduleActionCoordination:(id)arg1 dstURL:(id)arg2 action:(const char *)arg3 li:(id)arg4 si:(id)arg5 diffs:(unsigned long long)arg6 hasFinished:(bool*)arg7;
- (bool)_shouldBounceSourceItemWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 urlMatch:(struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg5;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_stageCreationOfSymlink:(id)arg1 forLocalItem:(id)arg2;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(bool*)arg6;
- (bool)applyLocalEditIfNecessaryToURL:(id)arg1 forItem:(id)arg2 serverItem:(id)arg3 forDelete:(bool)arg4 error:(id*)arg5;
- (id)bouncePath:(id)arg1 forItemConflictingWithAnFSRoot:(id)arg2;
- (bool)bouncePathMatch:(const struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (bool)bouncePathMatchesForLookup:(id)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (void)cancel;
- (void)close;
- (unsigned long long)computeSourceBounceNumberIfNecessaryWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (void)resume;
- (id)serialQueue;
- (id)session;
- (void)suspend;
- (id)taskTracker;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;

@end
