
@interface WeatherMaps.SnapshotViewController : UIViewController {
    void $__lazy_storage_$_snapshotView;
    void annotationViewModelFactory;
    void isVoiceOverRunning;
    void mapLocationAccessibilityModelManager;
    void observers;
    void onMapEventHandler;
    void overlaySonifier;
    void sizingBehavior;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  snapshotConfiguration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  snapshotJob;
    void snapshotManager;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
