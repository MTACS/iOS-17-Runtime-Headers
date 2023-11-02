
@interface _SFWebProcessPlugInAutoFillPageController : _SFWebProcessPlugInPageController <SFFormAutoFiller, SFInjectedJavaScriptWebProcessController> {
    _WKRemoteObjectInterface * _activityControllerInterface;
    _WKRemoteObjectInterface * _autoFillerInterface;
    _SFFormMetadataController * _formMetadataController;
    WKWebProcessPlugInScriptWorld * _isolatedWorld;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFFormMetadataController *formMetadataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(id)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(id)arg5 fieldsToObscure:(id)arg6 submitForm:(bool)arg7;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(id)arg5 submitForm:(bool)arg6;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 selectFieldAfterFilling:(id)arg4;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 shouldSubmit:(bool)arg3;
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;
- (void)clearAutoFillMetadata;
- (void)clearFieldsAndSetFormControlsToNotAutoFilled:(id)arg1 inFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)collectFormMetadataForPageLevelAutoFillAtURL:(id)arg1;
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;
- (void)collectURLsForPrefillingAtURL:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2;
- (id)formMetadataController;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)makeAutomaticStrongPasswordElementViewable:(bool)arg1 frame:(id)arg2 passwordControlUniqueIDs:(id)arg3;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setAutoFillSpinnerVisibility:(bool)arg1 textFieldMetadata:(id)arg2 frame:(id)arg3;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)setFormMetadataController:(id)arg1;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;

@end
