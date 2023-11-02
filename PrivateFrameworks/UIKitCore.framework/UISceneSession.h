
@interface UISceneSession : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    UISceneConfiguration * _configuration;
    NSString * _persistentIdentifier;
    NSString * _role;
    UIScene * _scene;
    struct { 
        unsigned int _userInfoIsCurrent : 1; 
        unsigned int _stateRestorationActivityIsDirty : 1; 
        unsigned int _stateRestorationActivityIsCurrent : 1; 
        unsigned int _trackingSessionRequest : 1; 
        unsigned int _configurationIsDirty : 1; 
        unsigned int _userInfoIsDirty : 1; 
        unsigned int _isInternal : 1; 
    }  _sessionFlags;
    NSUserActivity * _stateRestorationActivity;
    NSDictionary * _userInfo;
}

@property (setter=_setConfigurationIsDirty:, nonatomic) bool _configurationIsDirty;
@property (nonatomic, readonly) bool _configurationNeedsReevalulation;
@property (getter=_isInternal, nonatomic, readonly) bool _internal;
@property (setter=_setStateRestorationActivityIsDirty:, nonatomic) bool _stateRestorationActivityIsDirty;
@property (setter=_setTrackingRefreshRequest:, nonatomic) bool _trackingRefreshRequest;
@property (setter=_setUserInfoIsDirty:, nonatomic) bool _userInfoIsDirty;
@property (nonatomic, readonly) Class canvasSubclass;
@property (nonatomic, readonly, copy) UISceneConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) UICanvas *representedCanvas;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) UIScene *scene;
@property (nonatomic, retain) NSUserActivity *stateRestorationActivity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long systemType;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)canvasRepresentationForSystemType:(long long)arg1;
+ (id)defaultCanvasRepresentation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearAllDirtyFlags;
- (bool)_configurationIsDirty;
- (bool)_configurationNeedsReevalulation;
- (id)_copyWithoutUserInfo;
- (id)_init;
- (id)_initWithPersistentIdentifier:(id)arg1 sessionRole:(id)arg2 configurationName:(id)arg3;
- (bool)_isInternal;
- (void)_loadStateRestorationActivityIfNeeded;
- (void)_loadUserInfo;
- (void)_resetStateRestorationToActivity:(id)arg1;
- (void)_setConfigurationIsDirty:(bool)arg1;
- (void)_setScene:(id)arg1;
- (void)_setStateRestorationActivityIsDirty:(bool)arg1;
- (void)_setTrackingRefreshRequest:(bool)arg1;
- (void)_setUserInfoIsDirty:(bool)arg1;
- (bool)_stateRestorationActivityIsDirty;
- (bool)_trackingRefreshRequest;
- (void)_updateConfiguration:(id)arg1;
- (bool)_userInfoIsDirty;
- (Class)canvasSubclass;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (Class)delegateClass;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)persistentIdentifier;
- (id)representedCanvas;
- (id)role;
- (id)scene;
- (void)setStateRestorationActivity:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)stateRestorationActivity;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)systemType;
- (id)userInfo;

@end
