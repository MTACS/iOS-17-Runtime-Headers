
@interface WBSFormMetadataController : NSObject {
    WBSFormMetadata * _cachedFormMetadata;
    struct HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits> { 
        struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _framesToMetadataMap;
}

+ (bool)convertNumber:(id)arg1 toFormMetadataRequestType:(unsigned long long*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_formMetadataByAddingInformationAboutUserEditedStateForUserNameAndPasswordFieldsToFormMetadata:(id)arg1 inFrame:(id)arg2;
- (struct OpaqueJSValue { }*)_jsObjectForForm:(id)arg1 inFrame:(id)arg2;
- (void)_lockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)_unlockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (bool)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)annotateForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 focusFieldAfterFilling:(bool)arg5 fieldToFocus:(id)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 focusFieldAfterFilling:(bool)arg5 fieldToFocus:(id)arg6 fieldsToObscure:(id)arg7 submitForm:(bool)arg8;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 focusFieldAfterFilling:(bool)arg5 fieldToFocus:(id)arg6 submitForm:(bool)arg7;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 selectFieldAfterFilling:(id)arg5;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (bool)autoFillFrameIsValid:(id)arg1;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 shouldSubmit:(bool)arg3;
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)clearFieldsAndSetFormControlsToNotAutoFilled:(id)arg1 inFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearMetadataForFrame:(id)arg1;
- (void)clearScriptWorld;
- (void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3;
- (void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)disableSpellCheckInField:(id)arg1 inFrame:(id)arg2;
- (void)fillField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 focusedFieldControlID:(id)arg4;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(bool)arg3;
- (void)finishedAutoFillingOneTimeCodeInFrame:(id)arg1 shouldSubmit:(bool)arg2;
- (void)focusField:(id)arg1 inFrame:(id)arg2;
- (void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForField:(id)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)formElementWithFormID:(double)arg1 inFrame:(id)arg2;
- (id)formSubmissionURLStringForSearchTextField:(id)arg1 inFrame:(id)arg2 useStrictDetection:(bool)arg3;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id*)arg3 formMetadata:(id*)arg4;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id*)arg3 formMetadata:(id*)arg4 requestType:(unsigned long long)arg5;
- (id)init;
- (bool)isFrameAnnotated:(id)arg1;
- (bool)isFrameOrChildAnnotated:(id)arg1;
- (void)makeAutomaticStrongPasswordElementViewable:(bool)arg1 frame:(id)arg2 passwordControlUniqueIDs:(id)arg3;
- (bool)manualAutoFillButtonWillFitInFieldWithMetadata:(id)arg1;
- (id)metadataForActiveFormInPageWithMainFrame:(id)arg1;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3 addUserEditedStateForUserNameAndPasswordFields:(bool)arg4;
- (void*)metadataForFrame:(id)arg1 requestType:(unsigned long long)arg2;
- (void)oneTimeCodeFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)oneTimeCodeFieldFocused:(id)arg1 withFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)otherCreditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)otherCreditCardFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (bool)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1;
- (void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(bool)arg3;
- (void)recursivelyClearMetadataForFrames:(id)arg1;
- (bool)recursivelyCollectAncestorFramesOfFrame:(id)arg1 startingFromFrame:(id)arg2 ancestorFrames:(id)arg3;
- (void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id)arg3 formMetadata:(id)arg4;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(bool)arg4;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inField:(id)arg2 inFrame:(id)arg3 withString:(id)arg4 andSelectTailStartingAt:(unsigned long long)arg5;
- (void)selectRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inField:(id)arg2 inFrame:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRangeInField:(id)arg1 inFrame:(id)arg2;
- (void)setAutoFillSpinnerVisibility:(bool)arg1 textFieldMetadata:(id)arg2 frame:(id)arg3;
- (void)setFormControls:(id)arg1 inFrame:(id)arg2 asAutoFilled:(bool)arg3;
- (bool)shouldIncludeNonEmptyFields;
- (id)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(double)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(bool)arg6;
- (void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)textFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)unidentifiedTextFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)unidentifiedTextFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (id)uniqueIDForTextField:(id)arg1 inFrame:(id)arg2;
- (unsigned long long)userEditedTextControlCountInArray:(struct OpaqueJSValue { }*)arg1 context:(struct OpaqueJSContext { }*)arg2 expectTextFieldsRatherThanTextAreas:(bool)arg3;
- (void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4;
- (id)visibleNonEmptyTextFieldsInForm:(id)arg1 inFrame:(id)arg2;
- (void)willSendSubmitEventForForm:(id)arg1 inFrame:(id)arg2;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2;

@end
