
@interface SCLTimeIntervalModel : NSObject <SCLTimeIntervalDateConverting> {
    NSCalendar * _calendar;
    bool  _canAppendTimeInterval;
    NSDateInterval * _canonicalDateInterval;
    NSMutableArray * _timeIntervals;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) bool canAppendTimeInterval;
@property (nonatomic, readonly) bool canRemoveTimeIntervals;
@property (nonatomic, readonly) NSDateInterval *canonicalDateInterval;
@property (nonatomic, readonly, copy) NSArray *constraintIntervals;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timeIntervals;

+ (id)defaultTimeInterval;

- (void).cxx_destruct;
- (void)_recalculateCanAppend;
- (void)appendTimeInterval:(id)arg1;
- (id)calendar;
- (bool)canAppendTimeInterval;
- (bool)canRemoveTimeIntervals;
- (id)canonicalDateInterval;
- (id)canonicalDateIntervalForTimeInterval:(id)arg1;
- (id)constraintIntervals;
- (id)init;
- (id)initWithTimeIntervals:(id)arg1;
- (id)nextProposedTimeInterval;
- (void)removeTimeIntervalAtIndex:(unsigned long long)arg1;
- (void)replaceTimeIntervalAtIndex:(unsigned long long)arg1 withTimeInterval:(id)arg2;
- (id)scheduleTimeWithDate:(id)arg1;
- (void)setCanAppendTimeInterval:(bool)arg1;
- (void)setTimeIntervals:(id)arg1;
- (id)timeIntervals;

@end
