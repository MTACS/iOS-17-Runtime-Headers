
@protocol WFWorkflowWizardNameCellDelegate <NSObject>

@required

- (void)workflowWizardNameCell:(WFWorkflowWizardNameCell *)arg1 didUpdateName:(NSString *)arg2;

@optional

- (void)workflowWizardNameCellDidFinishEditing:(WFWorkflowWizardNameCell *)arg1;
- (void)workflowWizardNameCellDidSelectEditIcon:(WFWorkflowWizardNameCell *)arg1;

@end
