
@interface EKOrganizer : EKParticipant

@property (nonatomic) long long scheduleAgent;

+ (Class)frozenClass;
+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(bool)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(bool)arg5;
- (bool)isCurrentUser;
- (id)owner;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (long long)scheduleAgent;
- (void)setCurrentUser:(bool)arg1;
- (void)setScheduleAgent:(long long)arg1;

@end
