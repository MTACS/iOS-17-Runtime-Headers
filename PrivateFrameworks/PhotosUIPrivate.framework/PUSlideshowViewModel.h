
@interface PUSlideshowViewModel : PUViewModel <PXChangeObserver> {
    long long  _currentState;
    PXContentPrivacyController * _privacyController;
    bool  _wantsChromeVisible;
}

@property (nonatomic) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXContentPrivacyController *privacyController;
@property (readonly) Class superclass;
@property (setter=setWantsChromeVisible:, nonatomic) bool wantsChromeVisible;

- (void).cxx_destruct;
- (id)currentChange;
- (long long)currentState;
- (void)dealloc;
- (void)dismissSlideshowIfLocked;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)newViewModelChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)privacyController;
- (void)registerChangeObserver:(id)arg1;
- (void)setCurrentState:(long long)arg1;
- (void)setPrivacyController:(id)arg1;
- (void)setWantsChromeVisible:(bool)arg1;
- (void)setWantsChromeVisible:(bool)arg1 changeReason:(long long)arg2;
- (void)unregisterChangeObserver:(id)arg1;
- (bool)wantsChromeVisible;

@end
