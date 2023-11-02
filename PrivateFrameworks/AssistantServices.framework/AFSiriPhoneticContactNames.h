
@interface AFSiriPhoneticContactNames : NSObject {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _languageCode;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
}

@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *organizationName;

- (void).cxx_destruct;
- (id)familyName;
- (id)givenName;
- (id)languageCode;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (id)spokenName;

@end
