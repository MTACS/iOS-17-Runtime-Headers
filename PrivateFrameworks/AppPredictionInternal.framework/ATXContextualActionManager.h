
@interface ATXContextualActionManager : NSObject {
    ATXContextualActionCountCache * actionCountCache;
    NSDate * actionCountCacheCreationDate;
}

- (void).cxx_destruct;
- (void)_getActionsFromLastMonth;
- (void)_updateCacheIfNeeded;
- (id)getAllCounts;
- (id)getCountsForContext:(id)arg1;
- (double)getIntervalSinceOldestEvent;
- (id)init;
- (id)initWithStaticActions:(id)arg1;

@end
