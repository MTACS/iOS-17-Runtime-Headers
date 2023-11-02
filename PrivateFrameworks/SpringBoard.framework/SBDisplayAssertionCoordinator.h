
@interface SBDisplayAssertionCoordinator : NSObject <SBDisplayAssertionProviding, _SBDisplayAssertionStackDelegate> {
    NSMutableDictionary * _assertionPreferencesMap;
    NSMutableDictionary * _assertionStackMap;
    <SBDisplayAssertionCoordinatorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDisplayAssertionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDisplayAssertionStackForRootDisplay:(id)arg1;
- (id)acquireAssertionForDisplay:(id)arg1 level:(unsigned long long)arg2 deactivationReasons:(unsigned long long)arg3 delegate:(id)arg4;
- (void)activateAssertionsForDisplay:(id)arg1;
- (void)assertionStack:(id)arg1 updatedAssertionPreferences:(id)arg2 oldPreferences:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidateAssertionForDerivedDisplayDisconnect:(id)arg1;
- (void)rootDisplayDidConnect:(id)arg1;
- (void)rootDisplayDidDisconnect:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
