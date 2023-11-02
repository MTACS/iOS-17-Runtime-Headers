
@protocol MFComposeSubjectViewDelegate <CNComposeHeaderViewDelegate>

@required

- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(MFComposeSubjectView *)arg1;

@optional

- (void)composeSubjectViewWillRemoveContent:(MFComposeSubjectView *)arg1;

@end
