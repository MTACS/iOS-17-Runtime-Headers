
@interface EXBDisplayAssertionCoordinatorPolicy : NSObject <EXBDisplayAssertionCoordinatorDelegate> {
    NSString * _disableIdleSleepReason;
    EXBDisplayMonitor * _displayMonitor;
    NSMutableDictionary * _rootIdentityToCloneMirroringMode;
    NSMutableDictionary * _rootIdentityToCloneMirroringModeTokens;
    NSMutableDictionary * _rootIdentityToDisableSleepReasons;
    NSMutableDictionary * _rootIdentityToDisplayArrangementItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setCloneMirroringMode:(unsigned long long)arg1 forDisplay:(id)arg2;
- (void)_setDisableIdleSleepReason:(id)arg1 forDisplay:(id)arg2;
- (void)_setDisplayArrangementItem:(id)arg1 forDisplay:(id)arg2;
- (void)assertionCoordinator:(id)arg1 updatedAssertionPreferences:(id)arg2 oldPreferences:(id)arg3 forDisplay:(id)arg4;
- (id)init;
- (id)initWithDisplayMonitor:(id)arg1;

@end
