
@interface SBSLockScreenContentAction : BSAction {
    id  _configurationObject;
    unsigned long long  _secureAppType;
    NSString * _slot;
    unsigned long long  _type;
}

@property (nonatomic, retain) SBApplicationSceneEntity *applicationSceneEntity;
@property (nonatomic, readonly) bool automaticallyInvalidatesOnSecureAppUserDismissal;
@property (nonatomic, retain) id configurationObject;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long secureAppType;
@property (nonatomic, retain) NSString *slot;
@property (nonatomic) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (bool)automaticallyInvalidatesOnSecureAppUserDismissal;
- (id)configurationObject;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 handler:(id /* block */)arg5;
- (unsigned long long)secureAppType;
- (void)setConfigurationObject:(id)arg1;
- (void)setSecureAppType:(unsigned long long)arg1;
- (void)setSlot:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)slot;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet

- (long long)sb_materialRecipe;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)applicationSceneEntity;
- (bool)isInProcessAction;
- (void)setApplicationSceneEntity:(id)arg1;
- (bool)specifiesSupportedInterfaceOrientations;
- (unsigned long long)supportedInterfaceOrientations;

@end
