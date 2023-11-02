
@interface PBFPosterSnapshotterOperation : NSBlockOperation <PBFPosterSnapshotterObserver> {
    unsigned long long  _advisoryQueuePriority;
    long long  _attempt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_group> * _lock_group;
    bool  _lock_snapshotterDidStart;
    long long  _maxNumberOfAttempts;
    PBFPosterSnapshotRequest * _request;
    PBFPosterSnapshotter * _snapshotter;
}

@property unsigned long long advisoryQueuePriority;
@property (nonatomic) long long attempt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxNumberOfAttempts;
@property (nonatomic, readonly) PBFPosterSnapshotRequest *request;
@property (nonatomic, readonly) PBFPosterSnapshotter *snapshotter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_leaveMainGroup;
- (void)_snapshotterDidStart;
- (unsigned long long)advisoryQueuePriority;
- (long long)attempt;
- (void)cancel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithRequest:(id)arg1 snapshotter:(id)arg2;
- (long long)maxNumberOfAttempts;
- (id)request;
- (void)setAdvisoryQueuePriority:(unsigned long long)arg1;
- (void)setAttempt:(long long)arg1;
- (void)setMaxNumberOfAttempts:(long long)arg1;
- (id)snapshotter;
- (void)snapshotter:(id)arg1 failedWithError:(id)arg2;
- (void)snapshotterDidTakeSnapshots:(id)arg1 snapshotsByDefinition:(id)arg2;

@end
