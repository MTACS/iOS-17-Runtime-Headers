
@interface WFShortcutExporter : NSObject {
    WFWorkflowRecord * _workflowRecord;
}

@property (nonatomic, readonly) WFWorkflowRecord *workflowRecord;

- (void).cxx_destruct;
- (void)exportWorkflowWithCompletion:(id /* block */)arg1;
- (id)initWithWorkflow:(id)arg1 sharingOptions:(id)arg2;
- (id)initWithWorkflowRecord:(id)arg1;
- (id)workflowRecord;

@end
