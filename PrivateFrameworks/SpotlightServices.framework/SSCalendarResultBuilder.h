
@interface SSCalendarResultBuilder : SSResultBuilder {
    NSString * _calendarName;
    NSString * _delegateCalendarName;
    NSDate * _endDate;
    NSString * _eventIdentifier;
    NSString * _eventName;
    bool  _isAllDay;
    NSString * _location;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSString *calendarName;
@property (nonatomic, retain) NSString *delegateCalendarName;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSString *eventIdentifier;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic) bool isAllDay;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSDate *startDate;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (id)stringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(bool)arg3;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildBackgroundColor;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)calendarName;
- (id)delegateCalendarName;
- (id)endDate;
- (id)eventIdentifier;
- (id)eventName;
- (id)initWithResult:(id)arg1;
- (bool)isAllDay;
- (id)location;
- (void)setCalendarName:(id)arg1;
- (void)setDelegateCalendarName:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
