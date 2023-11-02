
@interface SessionCore.AppEventObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void _addedPublisher;
    void _removedPublisher;
    void applicationWorkspace;
}

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;

@end
