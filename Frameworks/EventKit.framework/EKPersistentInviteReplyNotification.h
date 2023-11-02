
@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (bool)alerted;
- (id)creationDate;
- (int)entityType;
- (id)inReplyTo;
- (id)inviteReplyCalendar;
- (void)setCreationDate:(id)arg1;
- (void)setInReplyTo:(id)arg1;
- (void)setInviteReplyCalendar:(id)arg1;
- (void)setShareeDisplayName:(id)arg1;
- (void)setShareeFirstName:(id)arg1;
- (void)setShareeLastName:(id)arg1;
- (void)setShareeStatus:(unsigned long long)arg1;
- (void)setShareeURLString:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)shareeDisplayName;
- (id)shareeFirstName;
- (id)shareeLastName;
- (unsigned long long)shareeStatus;
- (id)shareeURLString;
- (id)summary;

@end
