
@interface _UISearchSuggestionControllerIOS : _UISearchSuggestionControllerIOSBase <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    UIContextMenuInteraction * _menuInteraction;
    UITapGestureRecognizer * _suggestionsRecoveryGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIContextMenuInteraction *menuInteraction;
@property (nonatomic, retain) UITapGestureRecognizer *suggestionsRecoveryGesture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_dismissMenuWithoutAnimation;
- (bool)_hasVisibleMenu;
- (id)_suggestionsMenu;
- (void)_suggestionsRecoveryGestureRecognized;
- (void)_updateMenuWithSuggestionGroups:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSearchTextField:(id)arg1;
- (id)menuInteraction;
- (void)setMenuInteraction:(id)arg1;
- (void)setSuggestionsRecoveryGesture:(id)arg1;
- (id)suggestionsRecoveryGesture;
- (void)updateSuggestionGroups:(id)arg1 userInitiated:(bool)arg2;

@end
