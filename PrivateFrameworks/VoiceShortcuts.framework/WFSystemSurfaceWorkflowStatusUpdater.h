
@interface WFSystemSurfaceWorkflowStatusUpdater : NSObject <WFDatabaseObjectObserver> {
    <WFDatabaseProvider> * _databaseProvider;
    NSObject<OS_dispatch_queue> * _queue;
    WFSystemSurfaceWorkflowStatusRegistry * _registry;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WFSystemSurfaceWorkflowStatusRegistry *registry;

- (void).cxx_destruct;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)databaseProvider;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (id)queue;
- (void)queue_startIfPossible;
- (void)queue_updateFromDatabase:(id)arg1;
- (id)registry;
- (id)shareSheetStateForWorkflows:(id)arg1 database:(id)arg2;
- (void)startIfPossible;

@end
