
@protocol SFFormAutoFiller <NSObject>

@required

- (void)annotateForm:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withValues:(NSDictionary *)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(NSString *)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(NSString *)arg5 fieldsToObscure:(NSArray *)arg6 submitForm:(bool)arg7;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(NSString *)arg5 submitForm:(bool)arg6;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(bool)arg3 selectFieldAfterFilling:(NSString *)arg4;
- (void)autoFillFormSynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)autoFillOneTimeCodeFieldsInFrame:(SFFormAutoFillFrameHandle *)arg1 withValue:(NSString *)arg2 shouldSubmit:(bool)arg3;
- (void)automaticPasswordSheetDimissedInFrame:(SFFormAutoFillFrameHandle *)arg1 focusedPasswordControlUniqueID:(NSString *)arg2;
- (void)clearAutoFillMetadata;
- (void)clearFieldsAndSetFormControlsToNotAutoFilled:(void *)arg1 inFrame:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, SFFormAutoFillFrameHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)collectFormMetadataForPageLevelAutoFillAtURL:(NSURL *)arg1;
- (void)collectFormMetadataForPrefillingAtURL:(NSURL *)arg1;
- (void)collectURLsForPrefillingAtURL:(NSURL *)arg1;
- (void)fillTextField:(NSString *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)getMetadataForTextField:(void *)arg1 inFrame:(void *)arg2 atURL:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, SFFormAutoFillFrameHandle *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSFormMetadata *, WBSFormControlMetadata *, void*
- (void)makeAutomaticStrongPasswordElementViewable:(bool)arg1 frame:(SFFormAutoFillFrameHandle *)arg2 passwordControlUniqueIDs:(NSArray *)arg3;
- (void)removeAutomaticPasswordElementsInFrame:(SFFormAutoFillFrameHandle *)arg1 focusedPasswordControlUniqueID:(NSString *)arg2 passwordControlUniqueIDs:(NSArray *)arg3;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(SFFormAutoFillFrameHandle *)arg1 passwordControlUniqueIDs:(NSArray *)arg2;
- (void)setAutoFillSpinnerVisibility:(bool)arg1 textFieldMetadata:(WBSFormControlMetadata *)arg2 frame:(SFFormAutoFillFrameHandle *)arg3;
- (void)setFormControls:(NSArray *)arg1 areAutoFilled:(bool)arg2 andClearField:(NSString *)arg3 inFrame:(SFFormAutoFillFrameHandle *)arg4;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(void *)arg1 formID:(void *)arg2 focusedPasswordControlUniqueID:(void *)arg3 passwordControlUniqueIDs:(void *)arg4 automaticPassword:(void *)arg5 blurAfterSubstitution:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: SFFormAutoFillFrameHandle *, long long, NSString *, NSArray *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
