
@interface SBHFocusModeManager : NSObject <SBFolderObserver> {
    SBHFocusMode * _activeFocusMode;
    SBHFocusModeFeatureIntroductionItem * _focusModeFeatureIntroductionItem;
    SBHIconManager * _iconManager;
}

@property (nonatomic, retain) SBHFocusMode *activeFocusMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBHFocusModeFeatureIntroductionItem *focusModeFeatureIntroductionItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBHIconManager *iconManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_focusModesRequiringIntroduction;
- (void)_iconEditingDidChange:(id)arg1;
- (void)_iconModelDidChange:(id)arg1;
- (id)activeFocusMode;
- (void)addFocusModeRequiringIntroduction:(id)arg1;
- (void)dealloc;
- (void)dismissAllFocusModePopovers;
- (id)focusModeFeatureIntroductionItem;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (id)iconManager;
- (id)initWithIconManager:(id)arg1;
- (void)removeFocusModeRequiringIntroduction:(id)arg1;
- (void)setActiveFocusMode:(id)arg1;
- (void)setFocusModeFeatureIntroductionItem:(id)arg1;
- (void)setIconManager:(id)arg1;
- (void)updateFocusModePopoverVisibility;

@end
