
@interface _UITextInteractionEditMenuAssistant : NSObject {
    NSTimer * _delayedEditMenuTimer;
    UITextInteractionAssistant * _interactionAssistant;
    NSNumber * _interactionAssistantViewRespondsShouldShowEditMenu;
    UITextContextMenuInteraction * _menuInteraction;
    UIMenu * _overrideMenu;
    NSArray * _replacements;
    bool  _wasShowingEditMenuBeforeScroll;
}

@property (nonatomic, readonly) bool _editMenuDismissedByActionSelection;
@property (nonatomic, readonly) bool _editMenuDismissedRecently;
@property (nonatomic, readonly) bool _editMenuIsVisible;
@property (nonatomic, readonly) bool _editMenuIsVisibleOrDismissedRecently;
@property (nonatomic, readonly) UIWindow *_editMenuSourceWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _editMenuTargetRect;
@property (nonatomic, readonly) bool _hasTextReplacements;
@property (nonatomic, readonly) UIView *_selectionView;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, retain) UITextContextMenuInteraction *menuInteraction;
@property (nonatomic, readonly) UIMenu *overrideMenu;
@property (nonatomic, readonly) NSArray *replacements;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_didReceiveSelectionDidScrollNotification:(id)arg1;
- (void)_didReceiveSelectionWillScrollNotification:(id)arg1;
- (id)_editMenuConfigurationForCurrentSelectionWithPreferredArrowDirection:(long long)arg1;
- (bool)_editMenuDismissedByActionSelection;
- (bool)_editMenuDismissedRecently;
- (bool)_editMenuIsVisible;
- (bool)_editMenuIsVisibleOrDismissedRecently;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editMenuRawTargetRect;
- (id)_editMenuSourceWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editMenuTargetRect;
- (bool)_hasTextReplacements;
- (void)_hideSelectionCommandsWithReason:(long long)arg1;
- (bool)_isAffectedByScrollNotification:(id)arg1;
- (void)_presentEditMenuWithPreferredDirection:(long long)arg1 overrideMenu:(id)arg2;
- (void)_presentEditMenuWithPreferredDirection:(long long)arg1 replacements:(id)arg2;
- (void)_presentEditMenuWithPreferredDirection:(long long)arg1 replacements:(id)arg2 overrideMenu:(id)arg3;
- (id)_screenCoordinateSpace;
- (id)_selectionView;
- (id)_selectionViewCoordinateSpace;
- (void)_showCommandsWithReplacements:(id)arg1 forDictation:(bool)arg2 afterDelay:(double)arg3;
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(bool)arg2 forDictation:(bool)arg3 arrowDirection:(long long)arg4;
- (void)_showSelectionCommandsForContextMenu:(bool)arg1;
- (id)_textViewCoordinateSpace;
- (bool)_updateEditMenuPositionForPreferredArrowDirection:(long long)arg1 replacements:(id)arg2;
- (id)_windowCoordinateSpace;
- (void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2;
- (void)cancelDelayedCommandRequests;
- (void)hideSelectionCommands;
- (id)initWithInteractionAssistant:(id)arg1;
- (id)interactionAssistant;
- (id)menuElementsForReplacements:(id)arg1;
- (id)menuInteraction;
- (id)overrideMenu;
- (id)replacements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingBoxForRects:(id)arg1;
- (void)setMenuInteraction:(id)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(bool)arg2 afterDelay:(double)arg3;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;

@end
