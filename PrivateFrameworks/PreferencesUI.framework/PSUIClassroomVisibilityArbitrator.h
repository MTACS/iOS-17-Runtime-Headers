
@interface PSUIClassroomVisibilityArbitrator : NSObject {
    NSString * _paneStatus;
    id /* block */  _paneStatusChangeHandler;
    <CRKSettingsUIVisibilityProvider> * _visibilityProvider;
    unsigned long long  _visibilityState;
    id /* block */  _visibilityStateChangeHandler;
}

@property (nonatomic, copy) NSString *paneStatus;
@property (nonatomic, copy) id /* block */ paneStatusChangeHandler;
@property (nonatomic, retain) <CRKSettingsUIVisibilityProvider> *visibilityProvider;
@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic, copy) id /* block */ visibilityStateChangeHandler;

+ (id)visibilityProviderKeyPaths;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)paneStatus;
- (id /* block */)paneStatusChangeHandler;
- (void)reloadVisibilityState;
- (void)setPaneStatus:(id)arg1;
- (void)setPaneStatusChangeHandler:(id /* block */)arg1;
- (void)setVisibilityProvider:(id)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)setVisibilityStateChangeHandler:(id /* block */)arg1;
- (void)startObservingVisibilityProvider;
- (void)stopObservingVisibilityProvider;
- (void)updatePaneStatus;
- (id)visibilityProvider;
- (unsigned long long)visibilityState;
- (id /* block */)visibilityStateChangeHandler;

@end
