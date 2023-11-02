
@interface HDDaemonSyncMessageHandler : NSObject <HDSyncMessageHandler> {
    long long  _accumulatedChangeSetSize;
    struct HDSyncAnchorRange { 
        long long start; 
        long long end; 
    }  _anchorRange;
    NSMutableArray * _changes;
    long long  _currentAnchor;
    bool  _done;
    long long  _lastAnchor;
    long long  _nextSequence;
    HDSyncAnchorMap * _requiredAnchorMap;
    NSError * _sendChangesError;
    long long  _sendChangesStatus;
    HDSyncSession * _session;
    Class  _syncEntityClass;
}

@property (nonatomic, readonly) long long currentAnchor;
@property (nonatomic, readonly, copy) NSError *sendChangesError;
@property (nonatomic, readonly) long long sendChangesStatus;

- (void).cxx_destruct;
- (void)abandonUnsentChangesForError:(id)arg1;
- (long long)currentAnchor;
- (void)dealloc;
- (id)description;
- (id)initWithSyncEntityClass:(Class)arg1 anchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 session:(id)arg3 requiredAnchorMap:(id)arg4;
- (id)sendChangesError;
- (long long)sendChangesStatus;
- (bool)sendCodableChange:(id)arg1 resultAnchor:(long long)arg2 sequence:(long long)arg3 done:(bool)arg4 error:(id*)arg5;
- (bool)sendCodableChange:(id)arg1 version:(struct { int x1; int x2; })arg2 resultAnchor:(long long)arg3 sequence:(long long)arg4 done:(bool)arg5 error:(id*)arg6;

@end
