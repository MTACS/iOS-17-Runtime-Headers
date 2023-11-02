
@interface WFTriggerOptionSelectionViewContainer : UIView <UIGestureRecognizerDelegate> {
    <WFTriggerOptionSelectionViewContainerDelegate> * _delegate;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    WFTriggerOptionSelectionView * _leftView;
    WFTriggerOptionSelectionView * _rightView;
    UIStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTriggerOptionSelectionViewContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFTriggerOptionSelectionView *leftView;
@property (nonatomic) bool leftViewSelected;
@property (nonatomic, readonly) WFTriggerOptionSelectionView *rightView;
@property (nonatomic) bool rightViewSelected;
@property (nonatomic, readonly) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)feedbackGenerator;
- (void)handleMultiSelectViewPressWithRecognizer:(id)arg1;
- (id)init;
- (id)leftView;
- (bool)leftViewSelected;
- (id)rightView;
- (bool)rightViewSelected;
- (void)setDelegate:(id)arg1;
- (void)setLeftOptionImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 selected:(bool)arg4 tintColor:(id)arg5;
- (void)setLeftViewSelected:(bool)arg1;
- (void)setRightOptionImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 selected:(bool)arg4 tintColor:(id)arg5;
- (void)setRightViewSelected:(bool)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (id)stackView;

@end
