
@interface TVRUITopButtonPanelViewController : UIViewController <TVRUIRemoteViewProvider> {
    <_TVRUIEventDelegate> * _buttonEventDelegate;
    NSArray * _buttons;
    <TVRUIDevice> * _device;
    bool  _enabled;
    TVRUIButton * _guideButton;
    TVRUIButton * _muteButton;
    TVRUIButton * _powerButton;
    <TVRUIStyleProvider> * _styleProvider;
}

@property (nonatomic) <_TVRUIEventDelegate> *buttonEventDelegate;
@property (nonatomic, retain) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <TVRUIDevice> *device;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) TVRUIButton *guideButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVRUIButton *muteButton;
@property (nonatomic, retain) TVRUIButton *powerButton;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_updateButtonsShapes;
- (void)_updateViewState;
- (id)buttonEventDelegate;
- (id)buttons;
- (id)device;
- (bool)enabled;
- (id)guideButton;
- (id)muteButton;
- (id)powerButton;
- (void)setButtonEventDelegate:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGuideButton:(id)arg1;
- (void)setMuteButton:(id)arg1;
- (void)setPowerButton:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (id)styleProvider;
- (void)viewDidLoad;

@end
