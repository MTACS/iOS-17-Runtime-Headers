
@interface NCMaterialDisplayingCaptureOnlyViewController : UIViewController {
    NSMutableDictionary * _supplementaryMaterialsAndUsageCounts;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_registerMaterialDisplaying:(bool)arg1 forDisplaying:(id)arg2 persistent:(bool)arg3;
- (bool)_supportsCaptureForMaterialDisplaying:(id)arg1;
- (id)init;
- (void)loadView;
- (void)registerMaterialDisplaying:(id)arg1 persistent:(bool)arg2;
- (void)unregisterMaterialDisplaying:(id)arg1;

@end
