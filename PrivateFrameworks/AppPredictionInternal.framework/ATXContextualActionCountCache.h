
@interface ATXContextualActionCountCache : NSObject {
    NSDate * _oldestAction;
    NSCountedSet * allActions;
    NSCountedSet * headingHomeActions;
    NSDateInterval * headingHomeDateInterval;
    NSCountedSet * headingToWorkActions;
    NSDateInterval * headingToWorkDateInterval;
    NSDateInterval * otherDateInterval;
    NSCountedSet * unspecifiedActions;
}

@property (nonatomic, readonly) NSDate *oldestAction;

- (void).cxx_destruct;
- (void)addMinimalActionParameter:(id)arg1;
- (id)getAllCounts;
- (id)getCountsForContext:(id)arg1;
- (id)init;
- (bool)isHeadingHomeActionTime:(id)arg1;
- (bool)isHeadingToWorkActionTime:(id)arg1;
- (bool)isOtherActionTime:(id)arg1;
- (id)oldestAction;

@end
