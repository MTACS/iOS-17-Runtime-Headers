
@interface SGParsedPersonFromInteraction : NSObject {
    NSString * _bundleId;
    NSString * _contactIdentifier;
    NSDate * _date;
    NSString * _displayName;
    NSString * _email;
    NSString * _groupId;
    INPersonHandle * _handle;
    NSString * _interactionIdentifier;
    NSPersonNameComponents * _nameComponents;
    NSString * _phoneNumber;
    SGSocialProfileDetails * _socialProfile;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *groupId;
@property (nonatomic, readonly) NSString *interactionIdentifier;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) SGSocialProfileDetails *socialProfile;

+ (id)_peopleFromInteraction:(id)arg1;
+ (id)intentClassWhitelist;
+ (id)parseInteraction:(id)arg1 bundleId:(id)arg2;

- (void).cxx_destruct;
- (void)_harvestEmail:(id)arg1;
- (void)_harvestPerson:(id)arg1 handle:(id)arg2 suggestionType:(long long)arg3 bundleId:(id)arg4;
- (void)_harvestPhoneNumber:(id)arg1;
- (void)_harvestSocialProfile:(id)arg1 handle:(id)arg2 bundleId:(id)arg3;
- (id)bundleId;
- (id)contactIdentifier;
- (id)date;
- (id)displayName;
- (id)email;
- (void)grabNameIfNeededFromContactStore:(id)arg1;
- (id)groupId;
- (id)initWithPerson:(id)arg1 bundleId:(id)arg2 interactionIdentifier:(id)arg3 groupId:(id)arg4 date:(id)arg5;
- (id)interactionIdentifier;
- (id)nameComponents;
- (id)phoneNumber;
- (id)pipelineEntity;
- (id)socialProfile;

@end
