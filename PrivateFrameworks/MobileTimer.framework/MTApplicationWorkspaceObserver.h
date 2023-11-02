
@interface MTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _applicationWorkspace;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableDictionary * _observersForBundleID;
    bool  _observing;
}

@property (nonatomic, retain) LSApplicationWorkspace *applicationWorkspace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSMutableDictionary *observersForBundleID;
@property (getter=isObserving, nonatomic) bool observing;
@property (readonly) Class superclass;

+ (id)sharedWorkspaceObserver;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)applicationWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;
- (bool)isApplicationInstalledForBundleIdentifier:(id)arg1;
- (bool)isApplicationInstalledForBundleIdentifier:(id)arg1 allowPlaceholder:(bool)arg2;
- (bool)isObserving;
- (id)observerQueue;
- (id)observersForBundleID;
- (void)removeObserver:(id)arg1;
- (void)setApplicationWorkspace:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObserversForBundleID:(id)arg1;
- (void)setObserving:(bool)arg1;

@end
