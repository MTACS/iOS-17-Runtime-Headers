
@interface PXSurveyQuestionPlaceholderGadgetView : UICollectionViewCell {
    UIContentUnavailableView * _contentUnavailableView;
    <PXSurveyQuestionPlaceholderGadgetViewDelegate> * _delegate;
    UIContentUnavailableConfiguration * _loadingContentUnavailableConfiguration;
    UIContentUnavailableConfiguration * _placeholderContentUnavailableConfiguration;
}

@property (nonatomic) <PXSurveyQuestionPlaceholderGadgetViewDelegate> *delegate;
@property (nonatomic, copy) UIContentUnavailableConfiguration *loadingContentUnavailableConfiguration;
@property (nonatomic, copy) UIContentUnavailableConfiguration *placeholderContentUnavailableConfiguration;

- (void).cxx_destruct;
- (void)_performContentUnavailableButtonAction;
- (void)_restorePlaceholderContentUnavailableConfiguration;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)loadingContentUnavailableConfiguration;
- (id)placeholderContentUnavailableConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setLoadingContentUnavailableConfiguration:(id)arg1;
- (void)setPlaceholderContentUnavailableConfiguration:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
