
@interface SAMultiUserInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *homeMembers;
@property (nonatomic, copy) NSArray *multiUserPitchComposition;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) bool voiceProfilesAreInFlight;

+ (id)multiUserInfo;
+ (id)multiUserInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)homeMembers;
- (id)multiUserPitchComposition;
- (bool)requiresResponse;
- (void)setHomeMembers:(id)arg1;
- (void)setMultiUserPitchComposition:(id)arg1;
- (void)setVoiceProfilesAreInFlight:(bool)arg1;
- (bool)voiceProfilesAreInFlight;

@end
