
@interface _UISystemGestureManager : NSObject <FBSDisplayObserving, UIGestureRecognizerDelegate> {
    NSMutableDictionary * _displayIdentityToManagerMap;
    FBSDisplayMonitor * _displayMonitor;
    NSMapTable * _systemShellManagedDisplayIdentityToInvalidatableMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_cancelTouchesWithIdentifiers:(id)arg1 forDisplayWithIdentity:(id)arg2;
+ (id)_sharedInstanceIfExists;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_displayIdentityForTrackingGestureManagers:(id)arg1;
- (bool)_displayRequiresClientManagement:(id)arg1;
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3;
- (void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2;
- (id)allowGestureRecognizersOnDisplayWithIdentity:(id)arg1;
- (void)clearTransformFromDisplayWithIdentity:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (bool)gestureRecognizersAllowedOnDisplayWithIdentity:(id)arg1;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 onDisplayWithIdentity:(id)arg2;
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1;

@end
