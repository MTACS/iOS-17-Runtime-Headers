
@interface CALNEventInvitationResponseNotificationInfo : NSObject {
    EKCalendarEventInvitationNotification * _eventInvitationNotification;
    NSDictionary * _eventRepresentationDictionary;
    NSDate * _expirationDate;
    bool  _isDelegate;
    NSURL * _launchURL;
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
    NSString * _sourceTitle;
}

@property (nonatomic, readonly) EKCalendarEventInvitationNotification *eventInvitationNotification;
@property (nonatomic, readonly, copy) NSDictionary *eventRepresentationDictionary;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool isDelegate;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceTitle;

- (void).cxx_destruct;
- (id)description;
- (id)eventInvitationNotification;
- (id)eventRepresentationDictionary;
- (id)expirationDate;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 eventInvitationNotification:(id)arg4 eventRepresentationDictionary:(id)arg5 isDelegate:(bool)arg6 sourceTitle:(id)arg7 sourceIdentifier:(id)arg8;
- (bool)isDelegate;
- (id)launchURL;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;
- (id)sourceTitle;

@end
