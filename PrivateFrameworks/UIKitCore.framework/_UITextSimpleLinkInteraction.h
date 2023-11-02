
@interface _UITextSimpleLinkInteraction : UITextLinkInteraction {
    UIContextMenuInteraction * _contextMenuInteraction;
    _UITextInteractableItem * _highlightedItem;
    UILongPressGestureRecognizer * _highlighter;
    UITapGestureRecognizer * _linkTap;
    bool  _presentingFromSimpleTap;
    bool  _shouldProxyContextMenuDelegate;
}

@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, readonly) bool shouldProxyContextMenuDelegate;

- (void).cxx_destruct;
- (bool)_allowItemInteractions;
- (bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1 asTap:(bool)arg2 precision:(unsigned long long)arg3;
- (bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1 asTap:(bool)arg2 precision:(unsigned long long)arg3;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_removeInteractableItemFromCache:(id)arg1;
- (id)contextMenuDelegateProxy;
- (id)contextMenuInteraction;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)gesturesForFailureRequirements;
- (void)highlight:(id)arg1;
- (id)initWithShouldProxyContextMenuDelegate:(bool)arg1;
- (bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (id)itemInteractableView;
- (void)linkTapped:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (bool)shouldProxyContextMenuDelegate;
- (id)textLinkInteractableView;

@end
