
@interface MFComposeWebContentVariationView : MFMailComposeHeaderView {
    UIView * _background;
    NSString * _selectedContentVariation;
    UIButton * _webContentVariableButton;
}

@property (nonatomic, retain) UIView *background;
@property (nonatomic, readonly) NSString *selectedContentVariation;
@property (nonatomic, retain) UIButton *webContentVariableButton;

- (void).cxx_destruct;
- (void)_flashBackground;
- (id)_generateActionsForTitles:(id)arg1 currentSelection:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)background;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)refreshPreferredContentSize;
- (id)selectedContentVariation;
- (void)setBackground:(id)arg1;
- (void)setSelectedContentVariationLabel:(id)arg1;
- (void)setWebContentVariableButton:(id)arg1;
- (void)setupMenuItemTitles:(id)arg1 currentSelection:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)webContentVariableButton;

@end
