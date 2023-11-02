
@interface SearchUIActionsViewBoxView : NUIContainerBoxView {
    CNContactInlineActionsViewController * _actionsViewController;
}

@property (retain) CNContactInlineActionsViewController *actionsViewController;

+ (id)inlineActionsBoxView;

- (void).cxx_destruct;
- (id)actionsViewController;
- (void)didMoveToWindow;
- (void)setActionsViewController:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
