
@interface PKPassShareActivationExternalKeyEducationView : UIView {
    <PKPassShareActivationExternalKeyEducationViewDelegate> * _delegate;
    UIImageView * _educationImageView;
    PKContinuousButton * _nextButton;
}

@property (nonatomic, retain) UIImage *educationImage;

- (void).cxx_destruct;
- (void)_nextButtonPressed;
- (id)educationImage;
- (id)init;
- (id)initWithContinueButtonText:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)setEducationImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
