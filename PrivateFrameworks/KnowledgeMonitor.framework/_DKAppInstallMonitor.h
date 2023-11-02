
@interface _DKAppInstallMonitor : _DKMonitor <LSApplicationWorkspaceObserverProtocol, _DKHistoricalDeletingMonitor> {
    LSApplicationWorkspace * _appWorkspace;
    BMSource * _source;
    id /* block */  historicalDeletingHandler;
}

@property (nonatomic, retain) LSApplicationWorkspace *appWorkspace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalDeletingHandler;
@property (nonatomic, retain) BMSource *source;
@property (readonly) Class superclass;

+ (id)_dateFromProxy:(id)arg1;
+ (id)_eventWithAppProxy:(id)arg1 didInstall:(bool)arg2;
+ (id)_identifierFromProxy:(id)arg1;
+ (id)_metadataFromProxy:(id)arg1 didInstall:(bool)arg2;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1 didInstall:(bool)arg2;
- (id)appWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id /* block */)historicalDeletingHandler;
- (id)init;
- (void)setAppWorkspace:(id)arg1;
- (void)setHistoricalDeletingHandler:(id /* block */)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
