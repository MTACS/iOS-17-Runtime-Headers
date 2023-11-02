
@interface DOCKeyboardFocusManager : NSObject {
    NSPointerArray * _allKeyboardFocusable;
    <DOCKeyboardFocusable> * _currentlyFocused;
    bool  _externalFirstResponderInFlight;
}

@property (retain) NSPointerArray *allKeyboardFocusable;
@property (nonatomic) bool externalFirstResponderInFlight;

+ (void)_applySystemOverridePriority:(id)arg1;
+ (id)allDirectionalKeyCommandsWithAction:(SEL)arg1 prioritize:(bool)arg2;
+ (id)directionalKeyCommandsWithAction:(SEL)arg1 prioritize:(bool)arg2;
+ (id)selectionKeyCommandsWithAction:(SEL)arg1 prioritize:(bool)arg2;
+ (id)sharedManager;
+ (id)systemProvidedDirectionalKeyCommandsWithAction:(SEL)arg1 prioritize:(bool)arg2;
+ (id)systemProvidedSelectionKeyCommandsWithAction:(SEL)arg1 prioritize:(bool)arg2;

- (void).cxx_destruct;
- (bool)_isRegistered:(id)arg1;
- (void)_printAllRegisteredFocusable;
- (id)adjacentFocusableToFocusable:(id)arg1 direction:(long long)arg2;
- (id)allKeyboardFocusable;
- (id)currentlyFocused;
- (bool)externalFirstResponderInFlight;
- (id)init;
- (void)registerKeyboardFocusable:(id)arg1;
- (bool)requestCurrentFocus:(id)arg1;
- (bool)restoreCurrentlyFocused;
- (void)setAllKeyboardFocusable:(id)arg1;
- (void)setExternalFirstResponderInFlight:(bool)arg1;
- (void)unregisterKeyboardFocusable:(id)arg1;

@end
