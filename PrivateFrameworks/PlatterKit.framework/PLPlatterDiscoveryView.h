
@interface PLPlatterDiscoveryView : PLPlatterView {
    UILabel * _bodyTextLabel;
    UIAction * _clearAction;
    UIButton * _clearButton;
    UIAction * _defaultAction;
    UIView * _graphicContainerView;
    MTVisualStylingProvider * _strokeVisualStylingProvider;
    UILabel * _titleTextLabel;
}

@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic, retain) UIAction *clearAction;
@property (nonatomic, retain) UIAction *defaultAction;
@property (nonatomic, retain) UIView *graphicView;
@property (nonatomic, retain) MTVisualStylingProvider *strokeVisualStylingProvider;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_configureBodyLabelIfNeccessary;
- (void)_configureClearButtonIfNeccessary;
- (void)_configureTitleTextLabelIfNeccessary;
- (void)_layoutSubviewInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 measuringOnly:(out struct CGSize { double x1; double x2; }*)arg2;
- (id)bodyText;
- (id)clearAction;
- (id)defaultAction;
- (id)graphicView;
- (id)init;
- (void)layoutSubviews;
- (id)requiredVisualStyleCategories;
- (void)setBodyText:(id)arg1;
- (void)setClearAction:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setGraphicView:(id)arg1;
- (void)setStrokeVisualStylingProvider:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)strokeVisualStylingProvider;
- (id)titleText;
- (void)updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
