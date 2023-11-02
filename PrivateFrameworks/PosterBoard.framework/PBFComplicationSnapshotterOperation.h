
@interface PBFComplicationSnapshotterOperation : NSBlockOperation <PBFComplicationSnapshotterObserver> {
    long long  _attempt;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    NSObject<OS_dispatch_group> * _lock_group;
    bool  _lock_snapshotterDidStart;
    long long  _maxNumberOfAttempts;
    PBFComplicationSnapshotRequest * _request;
    PBFComplicationSnapshotter * _snapshotter;
}

@property (nonatomic) long long attempt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxNumberOfAttempts;
@property (nonatomic, readonly) PBFComplicationSnapshotRequest *request;
@property (nonatomic, readonly) PBFComplicationSnapshotter *snapshotter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_leaveMainGroup;
- (void)_snapshotterDidStart;
- (long long)attempt;
- (void)cancel;
- (void)complicationSnapshotter:(id)arg1 didFinishWithSnapshot:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1 snapshotter:(id)arg2;
- (long long)maxNumberOfAttempts;
- (id)request;
- (void)setAttempt:(long long)arg1;
- (void)setMaxNumberOfAttempts:(long long)arg1;
- (id)snapshotter;

@end
