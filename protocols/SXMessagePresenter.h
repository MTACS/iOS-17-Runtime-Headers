
@protocol SXMessagePresenter <NSObject>

@required

- (bool)canPresentMessage;
- (void)presentMessage:(SXPresentableMessage *)arg1;

@end
