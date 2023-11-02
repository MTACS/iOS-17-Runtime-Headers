
@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> * _delegate;
}

@property (nonatomic) NSObject<ATWorkspaceObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
