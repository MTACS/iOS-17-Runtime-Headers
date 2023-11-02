
@interface SUICApplicationStateHelper : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    FBSDisplayLayoutMonitor * _carplayDisplayLayoutMonitor;
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
    NSMutableDictionary * _foregroundAppInfos;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(id /* block */)arg2;
- (id)_foregroundAppInfosFor:(long long)arg1;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)_updateForAppInfoDictionaries:(id)arg1;
- (void)_updateForAppInfoDictionaries:(id)arg1 displayType:(id)arg2;
- (void)dealloc;
- (id)foregroundAppInfos;
- (id)foregroundAppInfosForCarPlay;
- (id)init;

@end
