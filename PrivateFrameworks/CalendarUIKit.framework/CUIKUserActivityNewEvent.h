
@interface CUIKUserActivityNewEvent : CUIKUserActivity {
    bool  _allDay;
    NSDate * _endDate;
    NSString * _location;
    NSString * _notes;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
    NSString * _title;
    NSURL * _url;
}

@property bool allDay;
@property (retain) NSDate *endDate;
@property (retain) NSString *location;
@property (retain) NSString *notes;
@property (retain) NSDate *startDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) NSString *title;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (bool)allDay;
- (id)dictionary;
- (id)endDate;
- (id)eventWithEventStore:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)location;
- (id)notes;
- (void)setAllDay:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)startDate;
- (id)timeZone;
- (id)title;
- (id)url;

@end
