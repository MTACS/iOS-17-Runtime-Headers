
@interface EKSerializableRecurrenceRule : EKSerializableObject {
    NSArray * _daysOfTheMonth;
    NSArray * _daysOfTheWeek;
    NSArray * _daysOfTheYear;
    long long  _firstDayOfTheWeek;
    long long  _frequency;
    long long  _interval;
    NSArray * _monthsOfTheYear;
    EKRecurrenceEnd * _recurrenceEnd;
    NSArray * _setPositions;
    NSArray * _weeksOfTheYear;
}

@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) long long interval;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, copy) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)createRecurrenceRule:(id*)arg1;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (long long)firstDayOfTheWeek;
- (long long)frequency;
- (id)initWithRecurrenceRule:(id)arg1;
- (long long)interval;
- (id)monthsOfTheYear;
- (id)recurrenceEnd;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (id)weeksOfTheYear;

@end
