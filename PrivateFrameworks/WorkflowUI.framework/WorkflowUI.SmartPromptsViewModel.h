
@interface WorkflowUI.SmartPromptsViewModel : _TtCs12_SwiftObject <WFDatabaseObjectObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _deletionAuthorizations;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _statesByAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _wildcardStates;
    void actionsByActionIdentifier;
    void actionsByActionUUID;
    void database;
    void states;
    void workflow;
    void workflowReference;
}

- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;

@end
