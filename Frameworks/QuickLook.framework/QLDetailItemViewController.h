
@interface QLDetailItemViewController : QLItemViewController {
    UIButton * _actionButton;
    UIButton * _actionIconButton;
    UIView * _currentActionButtonView;
    QLFileIconImageView * _filePreviewImageView;
    NSArray * _information;
    UIStackView * _informationStackView;
    bool  _isSettingStateAnimated;
    NSString * _previewTitle;
    QLDetailItemViewControllerState * _state;
}

@property (nonatomic, retain) NSArray *information;
@property (nonatomic, retain) QLDetailItemViewControllerState *state;

- (void).cxx_destruct;
- (id)_scalableSystemFontOfSize:(double)arg1;
- (void)_setActionButtonView:(id)arg1 animated:(bool)arg2 actionButtonLabel:(id)arg3 informationVisible:(bool)arg4;
- (void)_updateInformation;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (id)information;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performAction;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setInformation:(id)arg1;
- (void)setState:(id)arg1;
- (void)setState:(id)arg1 animated:(bool)arg2;
- (id)state;
- (void)viewDidLoad;

@end
