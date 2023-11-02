
@interface SBPrototypeController : NSObject <PTUIClient> {
    SBPrototypeDumpingGround * _dumpingGround;
    bool  _hasActiveKeyHIDEventRouters;
    NSXPCConnection * _prototypingUIServerConnection;
    SBSBackgroundActivityAssertion * _remotePrototypingAssertion;
    SBRestartManager * _restartManager;
    SBRootSettings * _rootSettings;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBRestartManager *restartManager;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_acquireRemotePrototypingAssertion;
- (void)_createConnection;
- (bool)_handleKeyHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)_handlePrototypingEvent:(long long)arg1;
- (void)_invalidateRemotePrototypingAssertion;
- (void)_sendEvent:(long long)arg1;
- (bool)_shouldSendEvent:(long long)arg1;
- (void)_updateKeyHIDEventRouters;
- (void)_updateRemoteEditingState;
- (bool)handleKeyHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)handleRingerSwitchEvent;
- (bool)handleVolumeDecreaseEvent;
- (bool)handleVolumeIncreaseEvent;
- (id)init;
- (void)killSpringBoard;
- (id)restartManager;
- (void)restartSpringBoard;
- (id)rootSettings;
- (void)setRestartManager:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)windowScene;

@end
