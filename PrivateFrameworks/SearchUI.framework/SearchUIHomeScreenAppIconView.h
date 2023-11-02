
@interface SearchUIHomeScreenAppIconView : SBIconView <SBIconDelegate, SBIconViewDelegate> {
    bool  _addRoundedKeyboardHighlight;
    <SearchUIHomeScreenEngagementDelegate> * _engagementDelegate;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    TLKProminenceView * _focusHighlightView;
    bool  _labelNeedsUpdateOnMovingToWindow;
    TLKProminenceView * _placeholderView;
    SearchUIRowModel * _rowModel;
    unsigned long long  _variant;
}

@property (nonatomic) bool addRoundedKeyboardHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIHomeScreenEngagementDelegate> *engagementDelegate;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (retain) TLKProminenceView *focusHighlightView;
@property (readonly) unsigned long long hash;
@property bool labelNeedsUpdateOnMovingToWindow;
@property (retain) TLKProminenceView *placeholderView;
@property (retain) SearchUIRowModel *rowModel;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long variant;

+ (id)cacheForVariant:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (long long)_focusItemDeferralMode;
- (void)_launchWithModifierFlags:(long long)arg1;
- (void)_updateLabel;
- (bool)addRoundedKeyboardHighlight;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)currentIconIsPlaceholder;
- (id)delegate;
- (void)didEngageWithTriggerEvent:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)engagementDelegate;
- (id)feedbackDelegate;
- (id)focusEffect;
- (id)focusGroupIdentifier;
- (id)focusHighlightView;
- (void)hidePlaceholder:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightFrame;
- (void)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)arg1;
- (void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)iconTapped:(id)arg1 modifierFlags:(long long)arg2;
- (long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (bool)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (bool)iconViewShouldBeginShortcutsPresentation:(id)arg1;
- (bool)iconViewShouldIncludeUninstallShortcutItem:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (unsigned long long)imageLoadingBehavior;
- (id)init;
- (bool)isTimedOutForIcon:(id)arg1;
- (bool)labelNeedsUpdateOnMovingToWindow;
- (void)launchIcon;
- (void)layoutSubviews;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1;
- (id)placeholderView;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removePlaceholderAndSetShadowAnimated:(bool)arg1;
- (id)rowModel;
- (void)setAddRoundedKeyboardHighlight:(bool)arg1;
- (void)setEngagementDelegate:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setFocusHighlightFrame;
- (void)setFocusHighlightView:(id)arg1;
- (void)setLabelNeedsUpdateOnMovingToWindow:(bool)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (id)shortcutsDelegateForIconView:(id)arg1;
- (bool)shouldHideShortcutsForAppIcon:(id)arg1;
- (bool)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (unsigned long long)variant;

@end
