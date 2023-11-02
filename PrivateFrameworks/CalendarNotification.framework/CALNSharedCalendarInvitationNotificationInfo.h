
@interface CALNSharedCalendarInvitationNotificationInfo : NSObject {
    EKCalendarNotification * _calendarNotification;
    bool  _isDelegate;
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
    NSString * _sourceTitle;
}

@property (nonatomic, readonly) EKCalendarNotification *calendarNotification;
@property (nonatomic, readonly) bool isDelegate;
@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceTitle;

- (void).cxx_destruct;
- (id)calendarNotification;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 isDelegate:(bool)arg3 sourceTitle:(id)arg4 sourceIdentifier:(id)arg5;
- (bool)isDelegate;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;
- (id)sourceTitle;

@end
