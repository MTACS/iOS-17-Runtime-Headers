
@interface PXSurveyQuestionsGadgetContentView : UICollectionViewCell {
    <PXSurveyQuestionConfiguration> * _configuration;
    bool  _contentHidden;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    NSString * _currentReason;
    <PXSurveyQuestionsGadgetContentViewDelegate> * _delegate;
    bool  _isInvalid;
    PXCapsuleButton * _noButton;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    PXCapsuleButton * _skipButton;
    UILabel * _titleLabel;
    PXCapsuleButton * _yesButton;
}

@property (nonatomic, retain) <PXSurveyQuestionConfiguration> *configuration;
@property (nonatomic) bool contentHidden;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic) <PXSurveyQuestionsGadgetContentViewDelegate> *delegate;
@property (nonatomic) bool isInvalid;
@property (nonatomic, retain) PXCapsuleButton *noButton;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (nonatomic, retain) PXCapsuleButton *skipButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) PXCapsuleButton *yesButton;

+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4;
- (void)_askForAdditionalReasonForAnswer:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })_calculateLayoutWithInputSize:(struct CGSize { double x1; double x2; })arg1 apply:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_didAnswer:(unsigned long long)arg1;
- (void)_didAnswerNo;
- (void)_didAnswerSkip;
- (void)_didAnswerYes;
- (id)configuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsInCoordinateSpace:(id)arg1;
- (bool)contentHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)delegate;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInvalid;
- (bool)isMultipleSelectionAnswerPresentation;
- (bool)isSelectionResponse;
- (id)keyCommands;
- (void)layoutSubviews;
- (id)noButton;
- (void)prepareForReuse;
- (id)selectionFeedbackGenerator;
- (void)setConfiguration:(id)arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setNoButton:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setYesButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)skipButton;
- (id)titleLabel;
- (void)updateButtonsWithAnswerState:(unsigned long long)arg1 reason:(id)arg2;
- (id)yesButton;

@end
