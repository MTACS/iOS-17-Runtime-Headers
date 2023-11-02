
@protocol MFMailComposeRecipientTextViewDelegate <CNComposeRecipientTextViewDelegate>

@required

- (UIResponder *)nextResponderForRecipientView:(MFMailComposeRecipientTextView *)arg1;

@optional

- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didFinishAddingRecipient:(CNComposeRecipient *)arg2;

@end
