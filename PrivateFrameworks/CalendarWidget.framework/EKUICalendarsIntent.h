
@interface EKUICalendarsIntent : INIntent

@property (nonatomic, copy) NSArray *calendars;
@property (nonatomic, retain) NSNumber *hideAllDayEvents;
@property (nonatomic, retain) NSNumber *mirrorCalendarApp;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
