
@interface WFAddToHomeScreenViewController : UITableViewController <UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFWorkflowWizardNameCellDataSource, WFWorkflowWizardNameCellDelegate> {
    <WFAddToHomeScreenViewControllerDelegate> * _delegate;
    WFWorkflowWizardNameCell * _editorCell;
    WFHomeScreenIcon * _icon;
    WFAddToHomeIconPreviewCell * _previewCell;
    WFWorkflow * _workflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAddToHomeScreenViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFWorkflowWizardNameCell *editorCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHomeScreenIcon *icon;
@property (nonatomic, retain) WFAddToHomeIconPreviewCell *previewCell;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)delegate;
- (void)didTapAdd;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)editorCell;
- (id)icon;
- (id)iconButtonDropdownMenuInWorkflowWizardNameCell:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithWorkflow:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentPickerControllerWithSourceType:(long long)arg1;
- (id)previewCell;
- (void)registerCells;
- (void)setDelegate:(id)arg1;
- (void)setEditorCell:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setPreviewCell:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)workflow;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;

@end
