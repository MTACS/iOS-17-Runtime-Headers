
@interface SCLHistoryGroup : NSObject {
    NSCalendar * _calendar;
    SCLSchedule * _effectiveSchedule;
    NSMutableArray * _items;
    NSDate * _referenceDate;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly, copy) SCLSchedule *effectiveSchedule;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, readonly) NSDate *referenceDate;

+ (id)historyGroupsByPrioritizingSchedule:(id)arg1 forDate:(id)arg2 inCalendar:(id)arg3 items:(id)arg4;

- (void).cxx_destruct;
- (id)calendar;
- (bool)canContainUnlockHistoryItem:(id)arg1;
- (id)effectiveSchedule;
- (id)initWithEffectiveSchedule:(id)arg1 calendar:(id)arg2 referenceDate:(id)arg3;
- (id)items;
- (id)referenceDate;
- (void)setItems:(id)arg1;

@end
