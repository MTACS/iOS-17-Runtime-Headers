
@interface _UIDebuggingOverlayDetailIvar : _UIDebuggingOverlayViewControllerDetail {
    UIDebuggingIvarViewController * _vc;
}

- (void).cxx_destruct;
- (void)_createVCIfNecessary;
- (void)_updateForInspectedView:(id)arg1;
- (void)_updateForInspectedViewController:(id)arg1;
- (id)viewController;

@end
