
@interface WFHandoffRunDescriptor : WFWorkflowRunDescriptor {
    WFWorkflowRunningContext * _context;
}

@property (nonatomic, readonly) WFWorkflowRunningContext *context;

- (void).cxx_destruct;
- (id)context;
- (id)initWithContext:(id)arg1;

@end
