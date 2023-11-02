
@interface _HKGraphTileDelayedRendererReleaseManager : NSObject {
    NSMutableArray * _delayedEntries;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _entriesLock;
}

@property (nonatomic, retain) NSMutableArray *delayedEntries;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } entriesLock;

+ (void)handleDelayedRendererRelease:(id)arg1 lastAssignmentTime:(double)arg2;
+ (id)singleton;

- (void).cxx_destruct;
- (bool)_hasExpiredEntriesAtTime:(double)arg1;
- (void)addRenderForDelayedRelease:(id)arg1 lastAssignmentTime:(double)arg2;
- (id)delayedEntries;
- (struct os_unfair_lock_s { unsigned int x1; })entriesLock;
- (id)init;
- (void)releaseExpiredImageRenderers:(double)arg1;
- (void)setDelayedEntries:(id)arg1;

@end
