
@interface PKApplicationWorkspaceProxy : NSObject <PKApplicationWorkspaceProxy> {
    LSApplicationWorkspace * _lsObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LSApplicationWorkspace *lsObject;
@property (readonly) Class superclass;

+ (id)defaultWorkspace;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)installedPlugins;
- (id)lsObject;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(id /* block */)arg2;
- (bool)registerPlugin:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)unregisterPlugin:(id)arg1;

@end
