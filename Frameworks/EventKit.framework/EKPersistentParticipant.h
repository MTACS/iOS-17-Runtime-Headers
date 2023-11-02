
@interface EKPersistentParticipant : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)URLString;
- (id)UUID;
- (id)comment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)displayNameRaw;
- (id)emailAddress;
- (id)firstName;
- (id)inviterNameString;
- (id)lastName;
- (id)owner;
- (id)phoneNumber;
- (id)proposedStartDate;
- (int)proposedStartDateStatus;
- (bool)scheduleForceSend;
- (int)scheduleStatus;
- (void)setComment:(id)arg1;
- (void)setDisplayNameRaw:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setInviterNameString:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setProposedStartDateStatus:(int)arg1;
- (void)setScheduleForceSend:(bool)arg1;
- (void)setScheduleStatus:(int)arg1;
- (void)setURLString:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)url;

@end
