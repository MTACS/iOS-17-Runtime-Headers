
@interface UITextLinkInteraction : UITextItemInteractionInteraction

@property (nonatomic, readonly) <UIContextMenuInteractionDelegate> *contextMenuDelegateProxy;

+ (id)interactionWithShouldProxyContextMenuDelegate:(bool)arg1;

- (id)contextMenuDelegateProxy;

@end
