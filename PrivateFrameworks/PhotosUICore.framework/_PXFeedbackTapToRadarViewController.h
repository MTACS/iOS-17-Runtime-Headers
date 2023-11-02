
@interface _PXFeedbackTapToRadarViewController : UIViewController {
    <_PXFeedbackTapToRadarViewControllerDelegate> * _delegate;
    UISwitch * _diagnoseSwitch;
    UIStackView * _diagnosticStackView;
    UIButton * _fileRadarButton;
    UILabel * _routesDescriptionLabel;
    UISegmentedControl * _routesSegmentedControl;
    UIStackView * _screenshotControlStackView;
    UISwitch * _screenshotSwitch;
}

@property (nonatomic, retain) <_PXFeedbackTapToRadarViewControllerDelegate> *delegate;
@property (nonatomic, retain) UISwitch *diagnoseSwitch;
@property (nonatomic, retain) UIStackView *diagnosticStackView;
@property (nonatomic, retain) UIButton *fileRadarButton;
@property (nonatomic, retain) UILabel *routesDescriptionLabel;
@property (nonatomic, retain) UISegmentedControl *routesSegmentedControl;
@property (nonatomic, retain) UIStackView *screenshotControlStackView;
@property (nonatomic, retain) UISwitch *screenshotSwitch;

+ (id)_buttonTintColor;
+ (id)_textColor;

- (void).cxx_destruct;
- (void)_didSelectCancelButton:(id)arg1;
- (void)_didSelectFileRadarButton;
- (id)delegate;
- (id)diagnoseSwitch;
- (id)diagnosticStackView;
- (id)fileRadarButton;
- (id)routesDescriptionLabel;
- (id)routesSegmentedControl;
- (id)screenshotControlStackView;
- (id)screenshotSwitch;
- (void)setDelegate:(id)arg1;
- (void)setDiagnoseSwitch:(id)arg1;
- (void)setDiagnosticStackView:(id)arg1;
- (void)setFileRadarButton:(id)arg1;
- (void)setRoutesDescriptionLabel:(id)arg1;
- (void)setRoutesSegmentedControl:(id)arg1;
- (void)setScreenshotControlStackView:(id)arg1;
- (void)setScreenshotSwitch:(id)arg1;
- (void)viewDidLoad;

@end
