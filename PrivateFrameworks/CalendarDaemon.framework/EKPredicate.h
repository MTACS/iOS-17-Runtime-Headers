
@interface EKPredicate : CADPredicate <NSSecureCoding> {
    NSArray * _calendars;
    NSDictionary * _databaseToCalendarRowIDs;
    NSMutableDictionary * _databaseToRestrictedCalendarRowIDs;
    NSDate * _endDate;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic, retain) NSArray *calendars;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendarRowIDsForDatabaseID:(int)arg1;
- (id)calendars;
- (void)createCalendarMaps;
- (id)databasesToQuery;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCalendars:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)restrictedCalendarRowIDsForDatabaseID:(int)arg1;
- (void)setCalendars:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setRestrictedCalendarRowIDs:(id)arg1 forDatabaseID:(int)arg2;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)title;

@end
