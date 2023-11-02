
@interface PUAirPlayScreenDetector : NSObject <SBSExternalDisplayServiceObserver> {
    NSMutableDictionary * _detectedScreensMap;
    SBSExternalDisplayService * _externalDisplayService;
    <PUAirPlayScreenReceiver> * _receiver;
}

@property (nonatomic, readonly) NSArray *availableScreens;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *detectedScreensMap;
@property (nonatomic, readonly) SBSExternalDisplayService *externalDisplayService;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUAirPlayScreenReceiver> *receiver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createAirPlayScreenAndNotifyDelegate:(id)arg1;
- (void)_enumerateAllScreensAndDisplayInfos:(id /* block */)arg1;
- (void)_handleUpdatedDisplayInfo:(id)arg1;
- (void)_performBlockWithDisplayInfoForScreen:(id)arg1 handler:(id /* block */)arg2;
- (void)_performBlockWithScreenForDisplayInfo:(id)arg1 handler:(id /* block */)arg2;
- (void)_removeAirPlayScreenAndNotifyDelegate:(id)arg1;
- (void)_scanForAvailableScreens;
- (void)_sceneDidDisconnect:(id)arg1;
- (void)_sceneWillConnect:(id)arg1;
- (void)_setUpSceneNotifications;
- (id)availableScreens;
- (id)detectedScreensMap;
- (void)externalDisplayDidUpdateProperties:(id)arg1;
- (id)externalDisplayService;
- (id)init;
- (id)receiver;
- (void)setReceiver:(id)arg1;
- (bool)shouldIgnoreScreen:(id)arg1 displayInfo:(id)arg2;

@end
