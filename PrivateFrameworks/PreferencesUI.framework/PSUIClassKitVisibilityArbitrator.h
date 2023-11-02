
@interface PSUIClassKitVisibilityArbitrator : NSObject {
    CLSSettingsVisibilityController * _visibilityController;
    unsigned long long  _visibilityState;
    id /* block */  _visibilityStateChangeHandler;
}

@property (nonatomic, retain) CLSSettingsVisibilityController *visibilityController;
@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic, copy) id /* block */ visibilityStateChangeHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)reloadVisibilityState;
- (void)setVisibilityController:(id)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)setVisibilityStateChangeHandler:(id /* block */)arg1;
- (void)settingsVisibilityDidChange:(id)arg1;
- (id)visibilityController;
- (unsigned long long)visibilityState;
- (id /* block */)visibilityStateChangeHandler;

@end
