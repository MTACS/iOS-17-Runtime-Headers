
@protocol PGGraphIngestPerson <NSObject>

@required

- (unsigned long long)ageCategory;
- (NSDate *)anniversaryDate;
- (NSDate *)birthdayDate;
- (NSString *)contactID;
- (NSString *)fullName;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isMe;
- (bool)isUserCreated;
- (NSString *)localIdentifier;
- (NSDictionary *)locationsByAddressTypes;
- (NSDate *)potentialBirthdayDate;
- (unsigned long long)relationship;
- (unsigned long long)sex;
- (NSString *)shareParticipantLocalIdentifier;

@end
