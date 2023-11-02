
@protocol EXBDisplayEndpointProviding <NSObject>

@required

- (unsigned long long)currentDeactivationReasons;
- (<EXBDisplayEndpointDelegate> *)delegate;
- (EXBDisplayArrangementItem *)displayArrangementItem;
- (FBSDisplayConfigurationRequest *)displayConfigurationRequest;
- (bool)hasControlOfDisplay;
- (unsigned long long)priorityLevel;
- (UIRootSceneWindow *)rootWindow;
- (void)setDelegate:(id <EXBDisplayEndpointDelegate>)arg1;
- (void)setDisplayArrangementItem:(EXBDisplayArrangementItem *)arg1;
- (void)setDisplayConfigurationRequest:(FBSDisplayConfigurationRequest *)arg1;
- (void)setWantsControlOfDisplay:(bool)arg1;
- (bool)wantsControlOfDisplay;

@end
