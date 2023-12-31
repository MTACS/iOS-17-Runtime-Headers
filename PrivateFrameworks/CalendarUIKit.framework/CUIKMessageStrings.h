
@interface CUIKMessageStrings : NSObject {
    NSArray * _bodyStrings;
    long long  _comments;
    EKCalendarEventInvitationNotificationAttendee * _importantAttendee;
    bool  _timeProposals;
    NSArray * _titleStrings;
}

@property (nonatomic, readonly) NSArray *bodyStrings;
@property (nonatomic, readonly) long long comments;
@property (nonatomic, readonly) EKCalendarEventInvitationNotificationAttendee *importantAttendee;
@property (nonatomic, readonly) bool timeProposals;
@property (nonatomic, readonly) NSArray *titleStrings;

- (void).cxx_destruct;
- (id)bodyStrings;
- (long long)comments;
- (id)importantAttendee;
- (id)initWithTitles:(id)arg1 bodyStrings:(id)arg2 comments:(long long)arg3 timeProposals:(bool)arg4 importantAttendee:(id)arg5;
- (bool)timeProposals;
- (id)titleStrings;

@end
