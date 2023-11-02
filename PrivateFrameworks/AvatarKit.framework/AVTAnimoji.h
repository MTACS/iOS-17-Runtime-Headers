
@interface AVTAnimoji : AVTAvatar {
    SCNNode * _avatarNode;
    SCNNode * _cameraNode;
    SCNNode * _headNode;
    SCNNode * _lightingNode;
    NSString * _name;
    NSDictionary * _specializationSettings;
    NSURL * _url;
}

@property (nonatomic, readonly) SCNNode *cameraNode;
@property (nonatomic, readonly) SCNNode *lightingNode;
@property (nonatomic, readonly) NSString *name;

+ (id)_scenePathForPuppetNamed:(id)arg1;
+ (id)_sceneURLForPuppetDirectoryURL:(id)arg1;
+ (id)animojiNamed:(id)arg1;
+ (id)animojiNames;
+ (id)animojiWithContentsOfURL:(id)arg1;
+ (void)preloadAnimojiNamed:(id)arg1;
+ (void)preloadPuppet:(id)arg1;
+ (void)preloadPuppetNamed:(id)arg1;
+ (id)puppetNamed:(id)arg1 options:(id)arg2;
+ (id)puppetNames;
+ (bool)supportsSecureCoding;
+ (id)thumbnailForAnimojiNamed:(id)arg1 options:(id)arg2;
+ (id)thumbnailForPuppetNamed:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (void)_load;
- (id)_sceneURL;
- (id)avatarNode;
- (id)cameraNode;
- (void)configureForBestAnimationQuality;
- (id)copyWithUsageIntent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)headNode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 error:(id*)arg2;
- (id)lightingNode;
- (void)loadIfNeeded;
- (id)modelNode;
- (id)name;
- (id)newDescriptor;
- (void)setName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (void)update;
- (id)url;
- (unsigned long long)usageIntent;

@end
