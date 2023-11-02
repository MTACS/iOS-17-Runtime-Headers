
@interface UISSceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding> {
    NSSet * _actions;
    NSString * _interactionIdentifier;
    bool  _preserveLayout;
    bool  _requestBackground;
    bool  _requestCenterSlot;
    bool  _requestFullscreen;
    bool  _requestQuickLookScene;
    UISScenePlacementConfiguration * _scenePlacementConfiguration;
    long long  _sceneRequestIntent;
    NSString * _sourceIdentifier;
}

@property (nonatomic, copy) NSSet *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interactionIdentifier;
@property (nonatomic) bool preserveLayout;
@property (nonatomic) bool requestBackground;
@property (nonatomic) bool requestCenterSlot;
@property (nonatomic) bool requestFullscreen;
@property (nonatomic) bool requestQuickLookScene;
@property (nonatomic, retain) UISScenePlacementConfiguration *scenePlacementConfiguration;
@property (nonatomic) long long sceneRequestIntent;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)interactionIdentifier;
- (bool)isKindOfClass:(Class)arg1;
- (bool)preserveLayout;
- (bool)requestBackground;
- (bool)requestCenterSlot;
- (bool)requestFullscreen;
- (bool)requestQuickLookScene;
- (id)scenePlacementConfiguration;
- (long long)sceneRequestIntent;
- (void)setActions:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setPreserveLayout:(bool)arg1;
- (void)setRequestBackground:(bool)arg1;
- (void)setRequestCenterSlot:(bool)arg1;
- (void)setRequestFullscreen:(bool)arg1;
- (void)setRequestQuickLookScene:(bool)arg1;
- (void)setScenePlacementConfiguration:(id)arg1;
- (void)setSceneRequestIntent:(long long)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (id)sourceIdentifier;

@end
