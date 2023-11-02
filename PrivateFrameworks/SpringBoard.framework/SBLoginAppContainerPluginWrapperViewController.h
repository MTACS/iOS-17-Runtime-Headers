
@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {
    SBLoginAppContainerPluginWrapperView * _containerView;
    SBLockScreenPluginOverlayViewController * _overlayController;
    SBLoginAppContainerOverlayWrapperView * _overlayWrapperView;
    SBLockScreenPlugin * _plugin;
}

@property (nonatomic, readonly, retain) SBLockScreenPlugin *plugin;

- (void).cxx_destruct;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)initWithPlugin:(id)arg1;
- (void)loadView;
- (id)plugin;

@end
