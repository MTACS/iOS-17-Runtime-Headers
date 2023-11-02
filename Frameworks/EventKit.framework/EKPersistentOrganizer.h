
@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) NSString *displayNameRaw;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic) bool isCurrentUser;

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4;
- (bool)isCurrentUser;
- (id)owner;
- (long long)scheduleAgent;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setScheduleAgent:(long long)arg1;

@end
