
@protocol PXComposeRecipientViewDelegate <NSObject>

@optional

- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didAddRecipient:(PXRecipient *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didRemoveRecipient:(PXRecipient *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 disambiguateRecipient:(PXRecipient *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 textDidChange:(NSString *)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(PXComposeRecipientView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(PXComposeRecipientView *)arg1;

@end
