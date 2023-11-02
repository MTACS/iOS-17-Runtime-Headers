
@interface WDBuddyFlowContinueFooterView : UIView {
    double  _bottomInset;
    NSString * _buttonText;
    UIButton * _continueButton;
    OBBoldTrayButton * _continueTrayButton;
    double  _width;
}

@property (nonatomic, retain) UIButton *continueButton;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)continueButton;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4 isLastScreen:(bool)arg5;
- (void)resetWaitingState;
- (void)setContinueButton:(id)arg1;
- (void)setWaitingState;
- (void)traitCollectionDidChange:(id)arg1;

@end
