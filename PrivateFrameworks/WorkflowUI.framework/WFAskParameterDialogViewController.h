
@interface WFAskParameterDialogViewController : WFCompactDialogViewController <WFModuleSummaryEditorDelegate, WFParameterEditorHostingCellDelegate> {
    WFAction * _fakeAction;
    WFWorkflow * _fakeWorkflow;
    bool  _finished;
    WFParameterEditorHostingCell * _hostingCell;
    UIButton * _modalButton;
    WFModuleSummaryEditor * _summaryEditor;
    WFSlotTemplateSlot * _summarySlot;
    WFCompactUnlockService * _unlockService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFAction *fakeAction;
@property (nonatomic, retain) WFWorkflow *fakeWorkflow;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFParameterEditorHostingCell *hostingCell;
@property (nonatomic, retain) UIButton *modalButton;
@property (nonatomic, retain) WFModuleSummaryEditor *summaryEditor;
@property (nonatomic, retain) WFSlotTemplateSlot *summarySlot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFCompactUnlockService *unlockService;

+ (id)singleButtonSlotForParameter:(id)arg1 state:(id)arg2;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (void)done;
- (id)fakeAction;
- (id)fakeWorkflow;
- (id)hostingCell;
- (id)initWithRequest:(id)arg1;
- (id)initialStateForSummaryEditor:(id)arg1;
- (bool)isFinished;
- (void)loadView;
- (id)modalButton;
- (void)modalButtonTapped:(id)arg1;
- (void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (void)parameterEditorCellDidInvalidateSize:(id)arg1;
- (void)setFakeAction:(id)arg1;
- (void)setFakeWorkflow:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHostingCell:(id)arg1;
- (void)setModalButton:(id)arg1;
- (void)setSummaryEditor:(id)arg1;
- (void)setSummarySlot:(id)arg1;
- (id)summaryEditor;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (void)summaryEditor:(id)arg1 didRequestEditingSlotWithIdentifier:(id)arg2;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(bool)arg2 withTextAttachmentToEdit:(id)arg3;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;
- (id)summarySlot;
- (id)unlockService;

@end
