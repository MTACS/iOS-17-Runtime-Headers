
@interface BKUIBundleEnrollViewController : BiometricKitUIEnrollViewController {
    long long  _maxShortScanCount;
    long long  _shortScanCount;
    NSObject<OS_os_log> * bkui_bundle_enroll_view_controller_log;
}

- (void).cxx_destruct;
- (void)afterStatusMessage:(unsigned int)arg1;
- (id)bundleAlertView;
- (void)statusMessage:(unsigned int)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
