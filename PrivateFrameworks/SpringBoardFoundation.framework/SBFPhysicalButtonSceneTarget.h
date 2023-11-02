
@interface SBFPhysicalButtonSceneTarget : NSObject <NSCopying, NSMutableCopying> {
    FBScene * _scene;
    FBSSceneIdentity * _sceneIdentity;
    NSMutableDictionary * _targetsByButton;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) FBSSceneIdentity *sceneIdentity;

- (void).cxx_destruct;
- (id)buttonTargetForButton:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scene;
- (id)sceneIdentity;

@end
