
@interface EKSerializableEvent : EKSerializableObject {
    NSArray * _alarms;
    NSArray * _attachments;
    NSArray * _attendees;
    NSString * _calendarIdentifier;
    NSDate * _endDate;
    bool  _isAllDay;
    NSNumber * _isNew;
    NSString * _location;
    NSString * _notes;
    NSArray * _recurrenceRules;
    EKSerializableParticipant * _selfAttendee;
    NSDate * _startDate;
    EKSerializableStructuredLocation * _structuredLocation;
    NSTimeZone * _timeZone;
    NSString * _title;
    double  _travelTime;
    NSURL * _url;
}

@property (nonatomic, retain) NSArray *alarms;
@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) bool isAllDay;
@property (nonatomic, retain) NSNumber *isNew;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, retain) NSArray *recurrenceRules;
@property (nonatomic, retain) EKSerializableParticipant *selfAttendee;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, retain) EKSerializableStructuredLocation *structuredLocation;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double travelTime;
@property (nonatomic, retain) NSURL *url;

+ (id)classesForKey;
+ (id)serializedProperties;

- (void).cxx_destruct;
- (void)_initAlarms:(id)arg1;
- (void)_initAttachments:(id)arg1;
- (void)_initAttendees:(id)arg1 selfAttendee:(id)arg2;
- (void)_initRecurrenceRule:(id)arg1;
- (id)alarms;
- (id)attachments;
- (id)attendees;
- (id)calendarIdentifier;
- (id)createEventInEventStore:(id)arg1;
- (id)endDate;
- (id)initWithEvent:(id)arg1;
- (bool)isAllDay;
- (id)isNew;
- (id)location;
- (id)notes;
- (id)recurrenceRules;
- (id)selfAttendee;
- (void)setAlarms:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setIsNew:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSelfAttendee:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setUrl:(id)arg1;
- (id)startDate;
- (id)structuredLocation;
- (id)timeZone;
- (id)title;
- (double)travelTime;
- (id)url;

@end
