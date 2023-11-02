
@interface APUISuggestionsWidgetViewController : APUIWidgetViewController <APUISuggestionsWidgetViewDelegate, ATXHomeScreenSuggestionClientObserver, INUIAddVoiceShortcutViewControllerDelegate, SBHWidgetContextMenuControlling> {
    ATXProactiveSuggestion * _selectedSuggestion;
    bool  _showingContextMenu;
    APUISuggestionsWidgetView * _widgetView;
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isShowingContextMenu, nonatomic) bool showingContextMenu;
@property (readonly) Class superclass;
@property (nonatomic, retain) APUISuggestionsWidgetView *widgetView;

+ (id)_actionWithSuggestion:(id)arg1;
+ (bool)_isSuggestionShortcut:(id)arg1;
+ (id)_shortcutWithSuggestion:(id)arg1;

- (void).cxx_destruct;
- (bool)_canDismissSelectedSuggestion;
- (bool)_canSaveSelectedSuggestion;
- (bool)_canShowWhileLocked;
- (id)_suggestionIdsInLayout:(id)arg1;
- (void)_updateLayoutAsynchronouslyWithSuggestionClient:(id)arg1;
- (void)_updateWidgetViewIfPossible;
- (void)addVoiceShortcutViewController:(id)arg1 didFinishWithVoiceShortcut:(id)arg2 error:(id)arg3;
- (void)addVoiceShortcutViewControllerDidCancel:(id)arg1;
- (id)applicationShortcutItems;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didSelectApplicationShortcutItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestionsClient:(id)arg2 layoutSize:(unsigned long long)arg3;
- (bool)isShowingContextMenu;
- (void)setShowingContextMenu:(bool)arg1;
- (void)setWidgetView:(id)arg1;
- (void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)verifyLayoutSizeCompatibility;
- (void)view:(id)arg1 didFailExecutingSuggestion:(id)arg2;
- (void)view:(id)arg1 didFinishExecutingSuggestion:(id)arg2;
- (void)view:(id)arg1 didTapSuggestion:(id)arg2;
- (void)viewDidLoad;
- (id)widgetView;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
