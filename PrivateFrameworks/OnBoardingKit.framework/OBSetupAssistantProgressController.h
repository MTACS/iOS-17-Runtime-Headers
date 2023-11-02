
@interface OBSetupAssistantProgressController : OBWelcomeController <OBSetupAssistantSupport> {
    UIProgressView * _progressBar;
    UILabel * _progressLabel;
    NSLayoutConstraint * _progressLabelTopAnchorConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIProgressView *progressBar;
@property (nonatomic, retain) UILabel *progressLabel;
@property (nonatomic, retain) NSLayoutConstraint *progressLabelTopAnchorConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_progressFont;
- (double)_progressLabelTopAnchorConstraintConstantWithFont:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)progressBar;
- (id)progressLabel;
- (id)progressLabelTopAnchorConstraint;
- (void)setProgress:(double)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressLabelTopAnchorConstraint:(id)arg1;
- (void)setProgressText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
