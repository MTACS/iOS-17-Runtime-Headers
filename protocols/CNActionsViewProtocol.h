
@protocol CNActionsViewProtocol

@required

- (void)didSelectAction:(CNActionItem *)arg1 withSourceView:(UIView *)arg2 longPress:(bool)arg3;

@optional

- (bool)actionsView:(CNActionsView *)arg1 shouldPresentDisambiguationUIForAction:(CNActionItem *)arg2;

@end
