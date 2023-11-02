
@interface CLSEvent : CLSPrimitive {
    bool  _accepted;
    NSArray * _attendees;
    NSDate * _endDate;
    CLLocation * _location;
    bool  _meetingRoom;
    bool  _organizedByMe;
    NSArray * _performers;
    NSDate * _startDate;
    NSString * _title;
}

@property (getter=isAccepted, nonatomic) bool accepted;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) CLLocation *location;
@property (getter=hasMeetingRoom, nonatomic) bool meetingRoom;
@property (getter=isOrganizedByMe, nonatomic) bool organizedByMe;
@property (nonatomic, retain) NSArray *performers;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *title;

+ (id)event;

- (void).cxx_destruct;
- (id)attendees;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)hasMeetingRoom;
- (id)initWithCoder:(id)arg1;
- (bool)isAccepted;
- (bool)isEqualToEvent:(id)arg1;
- (bool)isOrganizedByMe;
- (id)location;
- (id)performers;
- (void)setAccepted:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMeetingRoom:(bool)arg1;
- (void)setOrganizedByMe:(bool)arg1;
- (void)setPerformers:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)title;

@end
