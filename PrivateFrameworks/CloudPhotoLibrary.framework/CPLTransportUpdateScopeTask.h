
@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    <CPLEngineTransportDeleteTransportScopeTask> * _deleteTask;
    <CPLEngineTransportUpdateTransportScopeTask> * _updateTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (void)launch;
- (id)taskIdentifier;

@end
