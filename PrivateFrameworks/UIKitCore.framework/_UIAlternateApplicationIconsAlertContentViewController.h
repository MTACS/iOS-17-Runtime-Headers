
@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController {
    UILabel * _messageLabel;
}

@property (nonatomic, copy) NSString *messageText;

- (void).cxx_destruct;
- (void)__updateWithVisualStyle:(id)arg1;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)arg1;
- (void)_updateWithContainingAlertControllerVisualStyle;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)messageText;
- (void)setMessageText:(id)arg1;

@end
