
@protocol CNComposeRecipientTextViewDelegate <CNComposeHeaderViewDelegate, NSObject>

@optional

- (bool)chooseSelectedSearchResultForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (bool)chooseSelectedSearchResultForComposeRecipientView:(CNComposeRecipientTextView *)arg1 context:(unsigned long long)arg2;
- (bool)collapseSelectedSearchResultForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (CNComposeRecipient *)composeRecipientView:(CNComposeRecipientTextView *)arg1 composeRecipientForAddress:(NSString *)arg2;
- (CNComposeRecipient *)composeRecipientView:(CNComposeRecipientTextView *)arg1 composeRecipientForContact:(CNContact *)arg2;
- (UIContextMenuConfiguration *)composeRecipientView:(CNComposeRecipientTextView *)arg1 contextMenuConfigurationForAtom:(CNComposeRecipientAtom *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didAddRecipient:(CNComposeRecipient *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didRemoveRecipient:(CNComposeRecipient *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didReplaceRecipients:(NSArray *)arg2 withRecipients:(NSArray *)arg3;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didSelectRecipients:(NSArray *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 disambiguateRecipientForAtom:(CNComposeRecipientAtom *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 showCorecipients:(NSArray *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 showPersonCardForAtom:(CNComposeRecipientAtom *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 showPersonCardForRecipient:(CNComposeRecipient *)arg2;
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 textDidChange:(NSString *)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(CNComposeRecipientTextView *)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(CNComposeRecipientTextView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(CNComposeRecipientTextView *)arg1;
- (void)composeRecipientViewReturnPressed:(CNComposeRecipientTextView *)arg1;
- (bool)composeRecipientViewShowingSearchResults:(CNComposeRecipientTextView *)arg1;
- (void)composeRecipientViewTabPressed:(CNComposeRecipientTextView *)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (bool)expandSelectedSearchResultForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (bool)presentSearchResultsForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (unsigned long long)presentationOptionsForRecipient:(CNComposeRecipient *)arg1;
- (void)recipientViewDidBecomeFirstResponder:(CNComposeRecipientTextView *)arg1;
- (void)recipientViewDidResignFirstResponder:(CNComposeRecipientTextView *)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(CNComposeRecipientTextView *)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(CNComposeRecipientTextView *)arg1;
- (void)stopDisambiguatingForComposeRecipientView:(CNComposeRecipientTextView *)arg1;

@end
