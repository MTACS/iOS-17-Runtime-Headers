
@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate>

@required

- (void)addLink:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (EFPair *)allRecipientNamesAndAddresses;
- (bool)bccAddressesDirtied;
- (bool)canShowAttachmentPicker;
- (bool)canShowFromField;
- (bool)canShowImageSizeField;
- (void)changeQuoteLevel:(long long)arg1;
- (void)composeWebView:(MFComposeWebView *)arg1 composeBodyIsEmpty:(bool)arg2;
- (void)composeWebView:(MFComposeWebView *)arg1 didChangeHeight:(double)arg2;
- (_MFMailCompositionContext *)compositionContext;
- (long long)compositionType;
- (NSString *)currentScaleImageSize;
- (void)didCreateAttachment:(MFAttachment *)arg1;
- (void)didInsertAttachment:(MFAttachment *)arg1;
- (void)didInsertBodyText:(NSString *)arg1;
- (void)didRemoveAttachment:(MFAttachment *)arg1;
- (void)editLink:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)editTextDescription:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NSArray *)emailAddresses;
- (bool)hasAttachments;
- (void)importDocument;
- (void)insertDrawing;
- (void)insertPhotoOrVideo;
- (bool)isAddressHideMyEmail:(NSString *)arg1;
- (bool)isHideMyEmailMessage;
- (void)markupAttachment:(MFAttachment *)arg1;
- (MFMailPopoverManager *)popoverManager;
- (UIViewController *)presentationViewController;
- (void)scanDocument;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (NSString *)sendingEmailAddressIfExists;
- (bool)sendingEmailDirtied;
- (void)setHideMyEmailAddressForMailToURLAddressString:(NSString *)arg1;
- (void)setIsQuickReply:(bool)arg1;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (void)setSendingEmailAddressAsHME:(NSString *)arg1 isComposeTypeReply:(bool)arg2;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (void)updateSignature;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentInsetForComposeWebView:(MFComposeWebView *)arg1;
- (bool)canShowContentVariationPicker;
- (void)composeViewBodyTextChanged:(MFMailComposeView *)arg1;
- (void)composeWebViewDidBecomeFirstResponder;
- (void)composeWebViewDidChangeFontAttributes:(NSDictionary *)arg1;
- (void)composeWebViewDidFinishLoad;
- (void)composeWebViewDidResignFirstResponder;
- (NSString *)contentVariationName;
- (void)setHasAddedEditableHyperlink:(bool)arg1;
- (void)showMissingAttachmentDataAlert;
- (void)showStyleSelector:(id)arg1;
- (void)takeFocusFromComposeWebView:(MFComposeWebView *)arg1 inDirection:(unsigned long long)arg2;
- (void)takeSnapshotWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*

@end
