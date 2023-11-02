
@interface SXCalendarEventAction : NSObject <SXAction> {
    NSURL * _URL;
    bool  _allDay;
    NSDate * _endDate;
    NSString * _location;
    SXFormattedText * _notes;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
    NSString * _title;
    SXJSONDictionary * analytics;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool allDay;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) SXFormattedText *notes;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)URL;
- (bool)allDay;
- (id)analytics;
- (id)endDate;
- (id)initWithStartDate:(id)arg1;
- (id)location;
- (id)notes;
- (void)setAllDay:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (id)timeZone;
- (id)title;
- (id)type;

@end
