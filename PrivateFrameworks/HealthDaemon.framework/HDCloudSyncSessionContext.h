
@interface HDCloudSyncSessionContext : NSObject <NSProgressReporting> {
    unsigned long long  _archiveCount;
    _HKArchiveCreator * _archiveCreator;
    NSURL * _archiveURL;
    unsigned long long  _changesetCount;
    bool  _hasOpenSequence;
    HDSyncAnchorRangeMap * _pendingAnchorRangeMap;
    HDProfile * _profile;
    NSProgress * _progress;
    NSMutableSet * _syncEntityClassesWithProcessedChanges;
}

@property (nonatomic) unsigned long long archiveCount;
@property (nonatomic, readonly) _HKArchiveCreator *archiveCreator;
@property (nonatomic, readonly) unsigned long long archiveSize;
@property (nonatomic, readonly, copy) NSURL *archiveURL;
@property (nonatomic) unsigned long long changesetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasOpenSequence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSyncAnchorRangeMap *pendingAnchorRangeMap;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addChangeData:(id)arg1 changes:(id)arg2 sessionIdentifier:(id)arg3 outError:(id*)arg4;
- (unsigned long long)archiveCount;
- (id)archiveCreator;
- (unsigned long long)archiveSize;
- (id)archiveURL;
- (unsigned long long)changesetCount;
- (void)finishProgress;
- (bool)hasOpenSequence;
- (id)init;
- (id)initWithChangedSyncEntityCount:(unsigned long long)arg1 profile:(id)arg2;
- (id)pendingAnchorRangeMap;
- (id)profile;
- (id)progress;
- (bool)resetInvalidArchiveCreatorWithSessionUUID:(id)arg1 error:(id*)arg2;
- (void)setArchiveCount:(unsigned long long)arg1;
- (void)setChangesetCount:(unsigned long long)arg1;

@end
