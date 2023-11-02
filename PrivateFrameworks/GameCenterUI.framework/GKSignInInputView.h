
@interface GKSignInInputView : UIView {
    NSLayoutConstraint * _bottomToSignInBaselineConstraint;
    NSLayoutConstraint * _inputViewHeightConstraint;
    NSLayoutConstraint * _promptTextToProgressIndicatorTopConstraint;
    NSLayoutConstraint * _signInBaselineToPromptTextTopConstraint;
    NSLayoutConstraint * _signInFormToSignInLabelTopConstraint;
    NSLayoutConstraint * _signInInputViewHeightConstraint;
    NSLayoutConstraint * _topToSignInBaselineConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomToSignInBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *inputViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *promptTextToProgressIndicatorTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *signInBaselineToPromptTextTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *signInFormToSignInLabelTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *signInInputViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topToSignInBaselineConstraint;

- (void).cxx_destruct;
- (id)allVariableConstraints;
- (id)bottomToSignInBaselineConstraint;
- (id)inputViewHeightConstraint;
- (id)promptTextToProgressIndicatorTopConstraint;
- (void)setBottomToSignInBaselineConstraint:(id)arg1;
- (void)setInputViewHeightConstraint:(id)arg1;
- (void)setPromptTextToProgressIndicatorTopConstraint:(id)arg1;
- (void)setSignInBaselineToPromptTextTopConstraint:(id)arg1;
- (void)setSignInFormToSignInLabelTopConstraint:(id)arg1;
- (void)setSignInInputViewHeightConstraint:(id)arg1;
- (void)setTopToSignInBaselineConstraint:(id)arg1;
- (void)setupConstraintConstantsForOrientation:(long long)arg1;
- (id)signInBaselineToPromptTextTopConstraint;
- (id)signInFormToSignInLabelTopConstraint;
- (id)signInInputViewHeightConstraint;
- (id)topToSignInBaselineConstraint;

@end
