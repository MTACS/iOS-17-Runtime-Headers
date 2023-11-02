
@interface SAUserProfileItem : AceObject <SAAceSerializable>

@property (nonatomic) bool activeProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic, copy) NSData *profileImage;
@property (readonly) Class superclass;

- (bool)activeProfile;
- (id)encodedClassName;
- (id)fullName;
- (id)groupIdentifier;
- (id)profileIdentifier;
- (id)profileImage;
- (void)setActiveProfile:(bool)arg1;
- (void)setFullName:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setProfileImage:(id)arg1;

@end
