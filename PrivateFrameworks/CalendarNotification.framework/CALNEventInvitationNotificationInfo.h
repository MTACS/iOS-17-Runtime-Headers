
@interface CALNEventInvitationNotificationInfo : NSObject {
    EKConflictDetails * _conflictDetails;
    EKCalendarEventInvitationNotification * _eventInvitationNotification;
    NSDictionary * _eventRepresentationDictionary;
    NSString * _eventURI;
    NSDate * _expirationDate;
    bool  _isDelegate;
    NSURL * _launchURL;
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
    NSString * _sourceTitle;
}

@property (nonatomic, readonly) EKConflictDetails *conflictDetails;
@property (nonatomic, readonly) EKCalendarEventInvitationNotification *eventInvitationNotification;
@property (nonatomic, readonly, copy) NSDictionary *eventRepresentationDictionary;
@property (nonatomic, readonly, copy) NSString *eventURI;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool isDelegate;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceTitle;

- (void).cxx_destruct;
- (id)conflictDetails;
- (id)description;
- (id)eventInvitationNotification;
- (id)eventRepresentationDictionary;
- (id)eventURI;
- (id)expirationDate;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 conflictDetails:(id)arg4 eventInvitationNotification:(id)arg5 eventRepresentationDictionary:(id)arg6 eventURI:(id)arg7 isDelegate:(bool)arg8 sourceTitle:(id)arg9 sourceIdentifier:(id)arg10;
- (bool)isDelegate;
- (id)launchURL;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;
- (id)sourceTitle;

@end
