
@interface FBSceneClientHandle : NSObject {
    FBSSceneClientIdentity * _identity;
    FBProcess * _legacyProcess;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) FBSSceneClientIdentity *identity;
@property (nonatomic, readonly) FBProcess *legacyProcess;
@property (nonatomic, readonly) RBSProcessHandle *processHandle;

+ (id)handleForScene:(id)arg1 clientProcess:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)identity;
- (id)legacyProcess;
- (id)processHandle;

@end
