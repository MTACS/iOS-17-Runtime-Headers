
@interface EXBDisplayEndpointClientComponent : FBSSceneComponent <EXBDisplayEndpointProviding> {
    <EXBDisplayEndpointDelegate> * _delegate;
}

@property (nonatomic, readonly) unsigned long long currentDeactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EXBDisplayEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) EXBDisplayArrangementItem *displayArrangementItem;
@property (nonatomic, retain) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic, readonly) bool hasControlOfDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long priorityLevel;
@property (nonatomic, readonly) UIRootSceneWindow *rootWindow;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsControlOfDisplay;

+ (id)settingsProtocol;

- (void).cxx_destruct;
- (unsigned long long)currentDeactivationReasons;
- (id)delegate;
- (id)displayArrangementItem;
- (id)displayConfigurationRequest;
- (bool)hasControlOfDisplay;
- (unsigned long long)priorityLevel;
- (id)rootWindow;
- (void)scene:(id)arg1 didUpdateSettings:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisplayArrangementItem:(id)arg1;
- (void)setDisplayConfigurationRequest:(id)arg1;
- (void)setWantsControlOfDisplay:(bool)arg1;
- (bool)wantsControlOfDisplay;

@end
