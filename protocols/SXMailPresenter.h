
@protocol SXMailPresenter <NSObject>

@required

- (bool)canComposeMail;
- (void)presentMail:(SXPresentableMail *)arg1;

@end
