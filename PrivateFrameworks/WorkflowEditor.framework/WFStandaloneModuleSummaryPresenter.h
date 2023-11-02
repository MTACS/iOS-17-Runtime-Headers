
@interface WFStandaloneModuleSummaryPresenter : NSObject <WFModuleSummaryEditorDelegate> {
    <WFStandaloneModuleSummaryPresenterDelegate> * _delegate;
    WFModuleSummaryEditor * _editor;
    <WFParameterState> * _initialState;
    WFModalPresentationAnchor * _presentationAnchor;
    <WFStandaloneModuleSummaryPresenterDelegate> * _retainedDelegate;
    WFSlotIdentifier * _slotIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFStandaloneModuleSummaryPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFModuleSummaryEditor *editor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WFParameterState> *initialState;
@property (nonatomic, retain) WFModalPresentationAnchor *presentationAnchor;
@property (nonatomic, retain) <WFStandaloneModuleSummaryPresenterDelegate> *retainedDelegate;
@property (nonatomic, readonly) WFSlotIdentifier *slotIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismiss;
- (id)editor;
- (id)initWithParameter:(id)arg1 slotIdentifier:(id)arg2 initialState:(id)arg3 isProcessing:(bool)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 presentationAnchor:(id)arg7 allowsPickingVariables:(bool)arg8;
- (id)initialState;
- (id)initialStateForSummaryEditor:(id)arg1;
- (id)menu;
- (void)present;
- (id)presentationAnchor;
- (void)releaseDelegate;
- (void)retainDelegate;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setPresentationAnchor:(id)arg1;
- (void)setRetainedDelegate:(id)arg1;
- (id)slotIdentifier;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (void)summaryEditor:(id)arg1 didRequestEditingSlotWithIdentifier:(id)arg2;
- (void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(bool)arg2 withTextAttachmentToEdit:(id)arg3;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;

@end
