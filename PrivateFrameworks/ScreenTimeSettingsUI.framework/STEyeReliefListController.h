
@interface STEyeReliefListController : STPINListViewController {
    PSSpecifier * _enableScreenDistanceSpecifier;
}

@property (nonatomic, retain) PSSpecifier *enableScreenDistanceSpecifier;

- (void).cxx_destruct;
- (id)_checkScreenDistanceState:(id)arg1;
- (id)_createEnableScreenDistanceGroupSpecifier;
- (id)_createEnableScreenDistanceSpecifer;
- (bool)_isScreenDistanceEnabled;
- (void)_setScreenDistance:(bool)arg1;
- (void)_setScreenDistance:(id)arg1 specifier:(id)arg2;
- (void)dealloc;
- (id)enableScreenDistanceSpecifier;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setEnableScreenDistanceSpecifier:(id)arg1;
- (id)specifiers;

@end
