
@interface REMRecurrenceRule : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding> {
    REMObjectID * _accountID;
    NSArray * _daysOfTheMonth;
    NSArray * _daysOfTheWeek;
    NSArray * _daysOfTheYear;
    long long  _firstDayOfTheWeek;
    long long  _frequency;
    long long  _interval;
    NSArray * _monthsOfTheYear;
    REMObjectID * _objectID;
    REMRecurrenceEnd * _recurrenceEnd;
    REMObjectID * _reminderID;
    NSArray * _setPositions;
    NSArray * _weeksOfTheYear;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) long long interval;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly, copy) REMRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMObjectID *reminderID;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;

+ (int)_convertREMRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1;
+ (id)cdEntityName;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(bool)arg2 isFloating:(bool)arg3;
+ (id)iCalendarValueFromRecurrenceType:(long long)arg1;
+ (id)iCalendarValueFromWeekday:(long long)arg1;
+ (id)newObjectID;
+ (id)nextRecurrentDueDateAfter:(id)arg1 dueDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 recurrenceRules:(id)arg5;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)firstDayOfTheWeek;
- (long long)frequency;
- (unsigned long long)hash;
- (id)iCalendarDescription;
- (id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 end:(id)arg6;
- (id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 firstDayOfTheWeek:(long long)arg6 daysOfTheWeek:(id)arg7 daysOfTheMonth:(id)arg8 monthsOfTheYear:(id)arg9 weeksOfTheYear:(id)arg10 daysOfTheYear:(id)arg11 setPositions:(id)arg12 end:(id)arg13;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4;
- (id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 end:(id)arg3;
- (long long)interval;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecurrenceRule:(id)arg1;
- (id)monthsOfTheYear;
- (id)objectID;
- (id)recurrenceEnd;
- (id)remObjectID;
- (id)reminderID;
- (id)setPositions;
- (id)stringValueAsDateOnly:(bool)arg1 isFloating:(bool)arg2;
- (id)weeksOfTheYear;

@end
