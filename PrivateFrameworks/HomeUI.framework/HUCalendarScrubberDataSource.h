
@interface HUCalendarScrubberDataSource : NSObject {
    NSHashTable * _changeObservers;
    HMCameraClipManager * _clipManager;
    NSArray * _dates;
    NSMutableDictionary * _datesContainingClips;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSHashTable *changeObservers;
@property (nonatomic) HMCameraClipManager *clipManager;
@property (nonatomic, retain) NSArray *dates;
@property (nonatomic, retain) NSMutableDictionary *datesContainingClips;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (void)_updateDateBoundariesIfNeeded;
- (void)addChangeObserver:(id)arg1;
- (id)changeObservers;
- (id)clipManager;
- (id)dateAtIndexPath:(id)arg1;
- (id)dates;
- (id)datesContainingClips;
- (long long)dayOfMonthForItemAtIndexPath:(id)arg1;
- (id)dayOfWeekForItemAtIndexPath:(id)arg1;
- (id)endDate;
- (bool)eventExistsForItemAtIndexPath:(id)arg1;
- (bool)eventExistsOnDate:(id)arg1;
- (id)indexPathForDate:(id)arg1;
- (id)init;
- (id)initWithCameraClipManager:(id)arg1;
- (void)loadDatesContainingClips;
- (void)reloadDates;
- (void)removeChangeObserver:(id)arg1;
- (void)removeEvents:(id)arg1;
- (void)setChangeObservers:(id)arg1;
- (void)setClipManager:(id)arg1;
- (void)setDates:(id)arg1;
- (void)setDatesContainingClips:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)shortMonthNameForItemAtIndexPath:(id)arg1;
- (id)startDate;
- (unsigned long long)totalNumberOfWeeks;
- (void)updateEvents:(id)arg1;

@end
