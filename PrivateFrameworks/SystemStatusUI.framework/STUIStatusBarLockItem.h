
@interface STUIStatusBarLockItem : STUIStatusBarItem <_UIBasicAnimationFactory> {
    NSTimer * _lockDisappearanceTimer;
    STUIStatusBarLockView * _lockView;
    bool  _showsLock;
    _UIExpandingGlyphsView * _stringView;
    long long  _unlockFailureCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *lockDisappearanceTimer;
@property (nonatomic, retain) STUIStatusBarLockView *lockView;
@property (nonatomic) bool showsLock;
@property (nonatomic, retain) _UIExpandingGlyphsView *stringView;
@property (readonly) Class superclass;
@property (nonatomic) long long unlockFailureCount;

+ (id)textDisplayIdentifier;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_create_lockView;
- (void)_create_stringView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)lockDisappearanceTimer;
- (id)lockView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setLockDisappearanceTimer:(id)arg1;
- (void)setLockView:(id)arg1;
- (void)setShowsLock:(bool)arg1;
- (void)setStringView:(id)arg1;
- (void)setUnlockFailureCount:(long long)arg1;
- (bool)showsLock;
- (id)stringView;
- (long long)unlockFailureCount;
- (id)viewForIdentifier:(id)arg1;

@end
