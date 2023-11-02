
@interface SlowNetworkCondition : COCondition {
    NSString * _profile;
    NSDictionary * _profileData;
    bool  _running;
    SlowNetworkUtil * _util;
}

@property (nonatomic, retain) NSString *profile;
@property (nonatomic, retain) NSDictionary *profileData;
@property (nonatomic) bool running;
@property (nonatomic, retain) SlowNetworkUtil *util;

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)arg1;

- (void).cxx_destruct;
- (bool)active;
- (id)identifierName;
- (id)initWithProfile:(id)arg1;
- (bool)isDestructive;
- (bool)isInternalOnly;
- (bool)isNLCPrefPaneActive;
- (id)profile;
- (id)profileData;
- (bool)running;
- (void)setProfile:(id)arg1;
- (void)setProfileData:(id)arg1;
- (void)setRunning:(bool)arg1;
- (bool)setUp;
- (void)setUtil:(id)arg1;
- (void)tearDown;
- (id)userFriendlyName;
- (id)util;

@end
