
@interface SBDisplayProfileRegistry : NSObject <SBEmbeddedDisplayProfileFactoryDelegate, SBExtendedDisplayProfileFactoryDelegate> {
    EXBDisplayProfileRegistry * _displayProfileRegistry;
    NSMapTable * _displayToWindowingMode;
    SBEmbeddedDisplayProfileFactory * _embeddedDisplayProfileFactory;
    SBExtendedDisplayProfileFactory * _extendedDisplayProfileFactory;
    SBMirroringDisplayProfileFactory * _mirroringDisplayProfileFactory;
    NSMapTable * _profileToWindowingMode;
    long long  _startupEmbeddedOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_modifyParameters:(id)arg1 orientation:(long long)arg2 orientationEventsEnabled:(bool)arg3 chamoisEnabled:(bool)arg4;
- (void)_registerEmbeddedDisplayProfile;
- (void)_registerExtendedProfile;
- (void)_registerMirroringProfile;
- (void)embeddedFactory:(id)arg1 modifyInitialSceneParameters:(id)arg2;
- (void)extendedFactory:(id)arg1 modifyInitialSceneParameters:(id)arg2;

@end
