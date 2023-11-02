
@interface BCSICloudServerEnvironment : NSObject <BCSICloudServerEnvironmentProtocol, BSDescriptionProviding> {
    bool  _isInternalInstall;
    long long  _type;
    <BCSUserDefaultsProviding> * _userDefaults;
}

@property (nonatomic, readonly) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, readonly) long long containerEnvironment;
@property (nonatomic, readonly) NSString *containerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInternalInstall, nonatomic, readonly) bool isInternalInstall;
@property (getter=isStagingMode, nonatomic, readonly) bool isStagingMode;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, readonly) <BCSUserDefaultsProviding> *userDefaults;

- (void).cxx_destruct;
- (id)additionalRequestHTTPHeaders;
- (long long)containerEnvironment;
- (id)containerID;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 isInternalInstall:(bool)arg2 type:(long long)arg3;
- (bool)isInternalInstall;
- (bool)isStagingMode;
- (void)setType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (id)userDefaults;

@end
