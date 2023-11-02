
@interface AMRedModeTriggerManager : NSObject <AMAmbientIlluminationTriggerDelegate, PTSettingsKeyObserver> {
    AMAmbientIlluminationTrigger * _ambientIlluminationTrigger;
    AMRedModeTriggerManagerContext * _initializationContext;
    NSHashTable * _observers;
    bool  _redModeDetectionEnabled;
    AMRedModeSettings * _redModeSettings;
    bool  _redModeTriggered;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRedModeDetectionEnabled, nonatomic) bool redModeDetectionEnabled;
@property (getter=isRedModeTriggered, setter=_setRedModeTriggered:, nonatomic) bool redModeTriggered;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getNewAmbientIlluminationTrigger;
- (void)_setRedModeTriggered:(bool)arg1;
- (void)_updateTriggerState;
- (void)addObserver:(id)arg1;
- (void)ambientIlluminationTrigger:(id)arg1 didUpdateTriggered:(bool)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)isRedModeDetectionEnabled;
- (bool)isRedModeTriggered;
- (void)removeObserver:(id)arg1;
- (void)setRedModeDetectionEnabled:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
