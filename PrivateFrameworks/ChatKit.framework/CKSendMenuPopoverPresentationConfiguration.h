
@interface CKSendMenuPopoverPresentationConfiguration : NSObject {
    CKSendMenuPopoverPresentationControllerAnchorItem * _anchorItem;
    UIViewController * _sendMenuViewController;
}

@property (nonatomic, retain) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem;
@property (nonatomic, retain) UIViewController *sendMenuViewController;

- (void).cxx_destruct;
- (id)anchorItem;
- (id)sendMenuViewController;
- (void)setAnchorItem:(id)arg1;
- (void)setSendMenuViewController:(id)arg1;

@end
