
@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver> {
    id  _appLaunchedNotificationToken;
    SBBiometricMonitorUI * _pearlMonitorUI;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_updatePearlDebugUI;
- (void)dealloc;
- (id)init;
- (void)setWindowScene:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)windowScene;

@end
