
@interface _UITextLinkInteractionHandler : _UITextItemInteractionHandler

+ (id)handlerForItem:(id)arg1 textContentView:(id)arg2;

- (id)_addLinkToReadingListAction:(id)arg1;
- (id)_copyLinkAction:(id)arg1;
- (id)_defaultMenuForInteractableItem;
- (id)_defaultPrimaryActionForInteractableItem;
- (id /* block */)_handlerRequiringUnlockedDevice:(id /* block */)arg1;
- (id)_openAppLinkInDefaultBrowserAction:(id)arg1;
- (id)_openAppLinkInExternalApplicationAction:(id)arg1;
- (id)_openURLAction:(id)arg1;
- (id)_shareLinkAction:(id)arg1;
- (id)_titleForLink:(id)arg1;
- (id)link;

@end
