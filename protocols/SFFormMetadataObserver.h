
@protocol SFFormMetadataObserver <NSObject>

@required

- (void)autoFillDidFinishWithUpdatedFormMetadata:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 shouldSubmit:(bool)arg3;
- (void)didCollectFormMetadataForPageLevelAutoFill:(NSDictionary *)arg1 atURL:(NSURL *)arg2;
- (void)didCollectFormMetadataForPreFilling:(NSDictionary *)arg1 atURL:(NSURL *)arg2;
- (void)didCollectURLsForPreFilling:(NSArray *)arg1 atURL:(NSURL *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)didCompleteWithPasskey;
- (void)didFillGeneratedPasswordInForm:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)didFillOneTimeCodeAndShouldSubmit:(bool)arg1;
- (void)didRemoveAutomaticStrongPasswordInForm:(WBSFormMetadata *)arg1 inputSessionUserObject:(NSDictionary *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)didUpdateUnsubmittedForm:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)textDidChangeInTextField:(WBSFormControlMetadata *)arg1 inForm:(WBSFormMetadata *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)willNavigateFrame:(SFFormAutoFillFrameHandle *)arg1 withUnsubmittedForm:(WBSFormMetadata *)arg2;

@end
