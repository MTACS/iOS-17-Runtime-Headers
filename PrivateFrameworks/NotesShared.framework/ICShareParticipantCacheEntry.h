
@interface ICShareParticipantCacheEntry : NSObject {
    NSString * _activityStreamDisplayName;
    NSString * _displayName;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _initials;
    NSSet * _names;
    NSString * _nickname;
}

@property (nonatomic, copy) NSString *activityStreamDisplayName;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *initials;
@property (nonatomic, copy) NSSet *names;
@property (nonatomic, copy) NSString *nickname;

- (void).cxx_destruct;
- (id)activityStreamDisplayName;
- (id)displayName;
- (id)familyName;
- (id)givenName;
- (id)initials;
- (id)names;
- (id)nickname;
- (void)setActivityStreamDisplayName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setInitials:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setNickname:(id)arg1;

@end
