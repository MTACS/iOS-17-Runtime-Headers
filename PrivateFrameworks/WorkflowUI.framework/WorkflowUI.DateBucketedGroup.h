
@interface WorkflowUI.DateBucketedGroup : NSObject <WFDatabaseResultObserver> {
    void dateAccessor;
    void delegate;
    void emptyMessage;
    void shortcutsResult;
    void shouldUpdate;
}

- (void).cxx_destruct;
- (void)databaseResultDidChange:(id)arg1;
- (id)init;

@end
