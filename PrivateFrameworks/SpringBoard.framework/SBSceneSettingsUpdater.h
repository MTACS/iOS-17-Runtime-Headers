
@interface SBSceneSettingsUpdater : NSObject {
    FBSDisplayConfiguration * _displayConfiguration;
    unsigned long long  _initialSupportedInterfaceOrientations;
    NSHashTable * _observers;
    FBScene * _scene;
    NSString * _scenePersistentIdentifier;
    SBTraitsSceneParticipantDelegate * _sceneTraitsDelegate;
    TRAParticipant * _traitsParticipant;
    NSString * _traitsRole;
    bool  _updatesGeometry;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic) unsigned long long initialSupportedInterfaceOrientations;
@property (nonatomic) double level;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly, copy) NSString *scenePersistentIdentifier;
@property (nonatomic, readonly) SBTraitsSceneParticipantDelegate *sceneTraitsDelegate;
@property (nonatomic, retain) NSString *traitsRole;
@property (nonatomic, readonly) bool updatesGeometry;

+ (void)__updateSceneInsetSettings:(id)arg1 forDisplayConfiguration:(id)arg2;
+ (void)__updateSceneSettings:(id)arg1 forDisplayConfiguration:(id)arg2 updateGeometry:(bool)arg3;
+ (void)safeUpdateScene:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)safeUpdateScene:(id)arg1 withDisplayConfiguration:(id)arg2;
+ (void)safeUpdateScene:(id)arg1 withDisplayConfiguration:(id)arg2 updateGeometry:(bool)arg3;
+ (void)safeUpdateScene:(id)arg1 withSceneLevel:(double)arg2;
+ (void)safeUpdateScene:(id)arg1 withUserInterfaceStyle:(long long)arg2;

- (void).cxx_destruct;
- (void)__setupTraitsParticipantWithRole:(id)arg1 displayIdentity:(id)arg2;
- (void)_createTraitsParticipantIfNeededWithRole:(id)arg1;
- (void)_setPersistenceIdentifier:(id)arg1;
- (id)addObserver:(id)arg1;
- (void)dealloc;
- (id)displayConfiguration;
- (id)initWithScene:(id)arg1 persistentIdentifier:(id)arg2 level:(double)arg3 updatesGeometry:(bool)arg4;
- (unsigned long long)initialSupportedInterfaceOrientations;
- (bool)isActive;
- (bool)isForeground;
- (double)level;
- (id)scene;
- (id)scenePersistentIdentifier;
- (id)sceneTraitsDelegate;
- (void)setActive:(bool)arg1 withTransitionContext:(id)arg2;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setInitialSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setLevel:(double)arg1;
- (void)setTraitsRole:(id)arg1;
- (id)traitsRole;
- (bool)updatesGeometry;

@end
