
@interface PKInAppPaymentPresentationHostContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _applicationName;
    NSString * _bundleIdentifier;
    NSString * _identifier;
    bool  _intentTriggered;
    NSString * _sceneBundleIdentifier;
    NSString * _sceneIdentifier;
    NSString * _teamID;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool intentTriggered;
@property (nonatomic, copy) NSString *sceneBundleIdentifier;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (nonatomic, copy) NSString *teamID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)applicationName;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)intentTriggered;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHostContext:(id)arg1;
- (id)sceneBundleIdentifier;
- (id)sceneIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentTriggered:(bool)arg1;
- (void)setSceneBundleIdentifier:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setTeamID:(id)arg1;
- (id)teamID;

@end
