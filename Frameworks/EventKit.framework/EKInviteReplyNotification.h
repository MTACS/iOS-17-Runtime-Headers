
@interface EKInviteReplyNotification : EKNotification

@property (nonatomic, readonly) bool alerted;
@property (nonatomic, readonly) NSString *calendarName;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *inReplyTo;
@property (nonatomic, readonly) EKCalendar *inviteReplyCalendar;
@property (nonatomic, copy) NSString *shareeDisplayName;
@property (nonatomic, readonly) NSString *shareeEmailAddress;
@property (nonatomic, copy) NSString *shareeFirstName;
@property (nonatomic, copy) NSString *shareeLastName;
@property (nonatomic, readonly) NSString *shareePhoneNumber;
@property (nonatomic) unsigned long long shareeStatus;
@property (nonatomic, copy) NSURL *shareeURL;
@property (nonatomic, copy) NSString *summary;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
+ (id)sourceForInviteReplyNotification:(id)arg1;

- (void)_setInviteReplyCalendar:(id)arg1;
- (bool)alerted;
- (id)calendarName;
- (void)clearAlertedStatus;
- (id)creationDate;
- (id)inReplyTo;
- (id)initWithInviteReplyCalendar:(id)arg1;
- (id)inviteReplyCalendar;
- (void)setCreationDate:(id)arg1;
- (void)setInReplyTo:(id)arg1;
- (void)setShareeDisplayName:(id)arg1;
- (void)setShareeFirstName:(id)arg1;
- (void)setShareeLastName:(id)arg1;
- (void)setShareeStatus:(unsigned long long)arg1;
- (void)setShareeURL:(id)arg1;
- (void)setShareeURLString:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)shareeDisplayName;
- (id)shareeEmailAddress;
- (id)shareeFirstName;
- (id)shareeLastName;
- (id)shareePhoneNumber;
- (unsigned long long)shareeStatus;
- (id)shareeURL;
- (id)shareeURLString;
- (id)summary;
- (bool)validate:(id*)arg1;

@end
