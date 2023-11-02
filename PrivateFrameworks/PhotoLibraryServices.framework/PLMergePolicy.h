
@interface PLMergePolicy : NSMergePolicy {
    bool  _isResolvingConflicts;
}

@property (nonatomic, readonly) bool isResolvingConflicts;

- (bool)isResolvingConflicts;
- (bool)resolveConflicts:(id)arg1 error:(id*)arg2;
- (bool)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2;

@end
