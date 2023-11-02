
@interface PKRemoveableAnimationTrackerStore : NSObject {
    NSMutableArray * _trackers;
}

@property (nonatomic, copy) NSArray *trackers;

- (void).cxx_destruct;
- (id)init;
- (void)preempt;
- (void)remove;
- (void)setTrackers:(id)arg1;
- (id)trackers;

@end
