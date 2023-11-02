
@interface PUSlideshowSession : NSObject <PUSlideshowSettingsViewModelChangeObserver, PUSlideshowViewModelChangeObserver, PXSettingsKeyObserver> {
    bool  __disablingIdleTimer;
    id  __disablingIdleTimerToken;
    PHAssetCollection * _assetCollection;
    PUSlideshowContextRegistry * _contextRegistry;
    OKProducerPreset * _currentPreset;
    long long  _currentState;
    bool  _didStartOnce;
    PHFetchResult * _fetchResult;
    OKMediaFeederPhotoKit * _mediaFeeder;
    OKPresentationViewController * _presentationViewController;
    PUSlideshowSettingsViewModel * _settingsViewModel;
    NSUUID * _uuid;
    PUSlideshowViewModel * _viewModel;
}

@property (setter=_setDisablingIdleTimer:, nonatomic) bool _disablingIdleTimer;
@property (setter=_setDisablingIdleTimerToken:, nonatomic, retain) id _disablingIdleTimerToken;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didStartOnce;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) OKPresentationViewController *presentationViewController;
@property (nonatomic, readonly) PUSlideshowSettingsViewModel *settingsViewModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) PUSlideshowViewModel *viewModel;

- (void).cxx_destruct;
- (void)_addCurrentSettingsToPayload:(id)arg1;
- (void)_beginDisablingIdleTimer;
- (void)_configurePresentationViewController:(id)arg1;
- (bool)_disablingIdleTimer;
- (id)_disablingIdleTimerToken;
- (void)_distributeSlideshowDisplayContextWithPresentationController:(id)arg1;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_invalidateCurrentState;
- (id)_resolutionSizes;
- (void)_setDisablingIdleTimer:(bool)arg1;
- (void)_setDisablingIdleTimerToken:(id)arg1;
- (void)_slideshowSettingsViewModel:(id)arg1 didChange:(id)arg2;
- (void)_slideshowViewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateCurrentState;
- (id)assetCollection;
- (long long)currentState;
- (void)dealloc;
- (bool)didStartOnce;
- (id)fetchResult;
- (id)init;
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2;
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2 startIndex:(unsigned long long)arg3;
- (id)presentationViewController;
- (void)registerSlideshowDisplayContext:(id)arg1;
- (void)setCurrentState:(long long)arg1;
- (void)setDidStartOnce:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)settingsViewModel;
- (void)unregisterSlideshowDisplayContext:(id)arg1;
- (void)updatePresentationViewController;
- (id)uuid;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
