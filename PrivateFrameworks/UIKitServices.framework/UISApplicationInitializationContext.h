
@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    UISCompatibilityContext * _compatibilityContext;
    FBSSceneIdentityToken * _defaultSceneToken;
    UISDeviceContext * _deviceContext;
    UISDisplayContext * _launchDisplayContext;
    UISDisplayContext * _mainDisplayContext;
    NSSet * _persistedSceneIdentifiers;
    bool  _supportAppSceneRequests;
}

@property (nonatomic, readonly) UISCompatibilityContext *compatibilityContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FBSSceneIdentityToken *defaultSceneToken;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UISDeviceContext *deviceContext;
@property (nonatomic, readonly) UISDisplayContext *displayContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UISDisplayContext *launchDisplayContext;
@property (nonatomic, readonly) UISDisplayContext *mainDisplayContext;
@property (nonatomic, readonly) NSSet *persistedSceneIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportAppSceneRequests;

// Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices

+ (id)defaultContext;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)compatibilityContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultSceneToken;
- (id)description;
- (id)deviceContext;
- (id)displayContext;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3;
- (id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3 supportAppSceneRequests:(bool)arg4;
- (id)initWithMainDisplayContext:(id)arg1 launchDisplayContext:(id)arg2 deviceContext:(id)arg3 persistedSceneIdentifiers:(id)arg4 supportAppSceneRequests:(bool)arg5;
- (id)initWithUISApplicationInitializationContext:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)launchDisplayContext;
- (id)mainDisplayContext;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)persistedSceneIdentifiers;
- (bool)supportAppSceneRequests;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sb_embeddedDisplayDefaultContext;
+ (id)sb_embeddedDisplayDefaultContextForSystemUIScenes;

@end
