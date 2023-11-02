
@interface StatusBarSpinnerController : NSObject <LoadProgressObserver> {
    int  _currentlyLoadingResourcesCount;
    bool  _enabled;
    float  _progress;
    <LoadableResource> * _resourceWhoseProgressIsShown;
    bool  _resourcesLoading;
    bool  _showingProgressIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setProgress:(float)arg1;
- (void)_setResourcesLoading:(bool)arg1;
- (void)_updateProgressIndicator;
- (void)didFailLoadingResource:(id)arg1;
- (void)didStartLoadingResource;
- (void)didStopLoadingResource;
- (id)init;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)updateProgressWithResource:(id)arg1;

@end
