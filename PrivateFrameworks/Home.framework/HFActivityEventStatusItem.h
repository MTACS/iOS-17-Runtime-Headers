
@interface HFActivityEventStatusItem : HFStatusItem <HFActivityEventStatusVending> {
    void activityLogCoordinator;
    void cachedEvents;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  midnightToday;
}

@property (nonatomic, retain) HFActivityLogCoordinator_Swift *activityLogCoordinator;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)activityLogCoordinator;
- (id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (void)setActivityLogCoordinator:(id)arg1;

@end
