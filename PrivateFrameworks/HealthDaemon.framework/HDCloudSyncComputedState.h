
@interface HDCloudSyncComputedState : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _targets;
}

@property (nonatomic, readonly, copy) NSArray *pullTargets;
@property (nonatomic, readonly, copy) NSArray *pushTargets;
@property (nonatomic, readonly, copy) NSArray *targets;

- (void).cxx_destruct;
- (void)addTargets:(id)arg1;
- (id)detailedDescription;
- (id)init;
- (id)pullTargets;
- (id)pushTargets;
- (void)replaceTargets:(id)arg1;
- (void)resetTargets;
- (id)targets;

@end
