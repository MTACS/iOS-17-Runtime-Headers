
@interface FBSSceneClientIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding> {
    NSString * _description;
    bool  _local;
    RBSProcessIdentity * _processIdentity;
    bool  _syncLocal;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property (readonly) Class superclass;
@property (getter=isSyncLocal, nonatomic, readonly) bool syncLocal;

+ (id)identityForBundleID:(id)arg1;
+ (id)identityForProcessIdentity:(id)arg1;
+ (id)localIdentity;
+ (id)localIdentity:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLocal:(bool)arg1 sync:(bool)arg2 identity:(id)arg3 description:(id)arg4;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fbs_sceneClientIdentity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isSyncLocal;
- (bool)isValid;
- (id)processIdentity;

@end
