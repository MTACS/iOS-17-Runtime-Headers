
@interface CLSEKEvent : NSObject <NSCoding> {
    bool  _allDay;
    NSArray * _attendees;
    CLSEKCalendar * _calendar;
    NSString * _calendarItemIdentifier;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDate * _endDate;
    bool  _hasAttendees;
    bool  _hasRecurrenceRules;
    bool  _isBirthday;
    bool  _isSuggestedAndAccepted;
    bool  _organizedByMe;
    CLSEKParticipant * _selfAttendee;
    NSDate * _startDate;
    NSString * _title;
}

@property (getter=isAllDay, readonly) bool allDay;
@property (readonly) NSArray *attendees;
@property (readonly) CLSEKCalendar *calendar;
@property (readonly) NSString *calendarItemIdentifier;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly) NSDate *endDate;
@property (readonly) CLLocation *geoLocation;
@property (readonly) bool hasAttendees;
@property (readonly) bool hasRecurrenceRules;
@property (readonly) bool isBirthday;
@property (readonly) bool isSuggestedAndAccepted;
@property (readonly) bool organizedByMe;
@property (readonly) CLSEKParticipant *selfAttendee;
@property (readonly) NSDate *startDate;
@property (readonly) NSString *title;

- (void).cxx_destruct;
- (id)attendees;
- (id)calendar;
- (id)calendarItemIdentifier;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)geoLocation;
- (bool)hasAttendees;
- (bool)hasRecurrenceRules;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestedAndAccepted;
- (bool)organizedByMe;
- (id)selfAttendee;
- (id)startDate;
- (id)title;

@end
