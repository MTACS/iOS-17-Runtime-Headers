
@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying, UISceneLayerTarget> {
    long long  _alignment;
    unsigned int  _contextID;
    NSString * _externalSceneID;
    double  _level;
    FBSSceneIdentityToken * _proxiedKeyboardOwner;
    unsigned int  _sceneID;
    long long  _type;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *externalSceneID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isKeyboardLayer;
@property (nonatomic, readonly) bool isKeyboardProxyLayer;
@property (nonatomic) double level;
@property (nonatomic, readonly, copy) FBSSceneIdentityToken *proxiedKeyboardOwner;
@property (nonatomic) unsigned int sceneID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

+ (id)layerWithFBSSceneLayer:(id)arg1;

- (void).cxx_destruct;
- (long long)alignment;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)externalSceneID;
- (unsigned long long)hash;
- (id)init;
- (id)initAsKeyboard;
- (id)initAsKeyboardProxyWithOwner:(id)arg1;
- (id)initWithContextID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKeyboardLayer;
- (bool)isKeyboardProxyLayer;
- (double)level;
- (id)proxiedKeyboardOwner;
- (unsigned int)sceneID;
- (void)setAlignment:(long long)arg1;
- (void)setExternalSceneID:(id)arg1;
- (void)setLevel:(double)arg1;
- (void)setSceneID:(unsigned int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)matchesLayer:(id)arg1;

@end
