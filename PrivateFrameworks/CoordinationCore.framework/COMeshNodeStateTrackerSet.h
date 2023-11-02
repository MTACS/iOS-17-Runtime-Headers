
@interface COMeshNodeStateTrackerSet : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _trackers;
}

@property (nonatomic, copy) NSDictionary *trackers;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)addNodeStateTracker:(id)arg1;
- (id)description;
- (void)enumerateNodeStateTrackersOfStatus:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodeStateTrackersUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)nodeStateTrackerForNode:(id)arg1;
- (id)nodeStateTrackersWithStatus:(long long)arg1;
- (void)removeAllNodeStateTrackers;
- (void)removeNodeStateTrackerForNode:(id)arg1;
- (void)setNodeDormant:(id)arg1 withState:(unsigned long long)arg2 error:(id)arg3;
- (void)setTrackers:(id)arg1;
- (id)trackers;

@end
