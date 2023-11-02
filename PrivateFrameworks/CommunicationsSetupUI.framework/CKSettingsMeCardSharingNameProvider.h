
@interface CKSettingsMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider> {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _middleName;
    NSString * _nickname;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *familyName;
@property (nonatomic, retain) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *middleName;
@property (nonatomic, retain) NSString *nickname;
@property (readonly) Class superclass;

+ (id)nameProviderForNickname:(id)arg1;

- (void).cxx_destruct;
- (id)familyName;
- (id)givenName;
- (id)middleName;
- (id)nickname;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;

@end
