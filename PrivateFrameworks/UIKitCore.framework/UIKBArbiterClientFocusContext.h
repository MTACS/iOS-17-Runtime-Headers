
@interface UIKBArbiterClientFocusContext : NSObject <NSSecureCoding> {
    unsigned int  _contextID;
    FBSSceneIdentityToken * _layeringSceneIdentity;
    FBSSceneIdentityToken * _sceneIdentity;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic, retain) FBSSceneIdentityToken *layeringSceneIdentity;
@property (nonatomic, retain) FBSSceneIdentityToken *sceneIdentity;

+ (id)focusContextForSceneIdentity:(id)arg1 contextID:(unsigned int)arg2;
+ (id)focusContextForSceneIdentity:(id)arg1 window:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layeringSceneIdentity;
- (id)sceneIdentity;
- (void)setContextID:(unsigned int)arg1;
- (void)setLayeringSceneIdentity:(id)arg1;
- (void)setSceneIdentity:(id)arg1;

@end
