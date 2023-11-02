
@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController {
    SBLockScreenPlugin * _plugin;
}

+ (bool)_pluginNeedsOverlay:(id)arg1;

- (void).cxx_destruct;
- (id)_newOverlayView;
- (id)initWithPlugin:(id)arg1;
- (void)loadView;

@end
