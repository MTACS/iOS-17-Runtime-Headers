
@interface WidgetRenderer.DebugOverlayViewController : UIViewController {
    void animationsPaused;
    void debugText;
    void debugView;
    void isSnapshotting;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_didExitAlwaysOn;
- (void)_willEnterAlwaysOn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewWillAppear:(bool)arg1;

@end
