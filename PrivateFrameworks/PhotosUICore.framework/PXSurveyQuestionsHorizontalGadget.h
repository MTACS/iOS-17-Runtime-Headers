
@interface PXSurveyQuestionsHorizontalGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate, PXProgrammaticNavigationParticipant> {
    PXExpectation * _nextViewLayoutExpectation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXSurveyQuestionsHorizontalGadgetDelegate> *horizontalGadgetDelegate;
@property (nonatomic, retain) PXExpectation *nextViewLayoutExpectation;
@property (nonatomic, readonly) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkCanNavigate:(bool*)arg1 toDestination:(id)arg2 iterator:(id)arg3;
- (void)_hideAccessoryButtonAction;
- (void)_hideSurveyQuestionsUntilDate:(id)arg1;
- (void)_infoAccessoryButtonAction;
- (void)_sendRequestConsentFormMail;
- (id /* block */)accessoryButtonAction;
- (id)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (unsigned long long)headerStyle;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (id)nextViewLayoutExpectation;
- (id)px_navigationDestination;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (bool)selectionFollowsFocus;
- (void)setNextViewLayoutExpectation:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
