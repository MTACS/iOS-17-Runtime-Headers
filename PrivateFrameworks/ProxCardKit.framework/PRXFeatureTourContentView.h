
@interface PRXFeatureTourContentView : UIView {
    UIView<PRXTextContainer> * _bodyView;
    NSArray * _bodyViewConstraints;
    PRXButton * _dismissButton;
    NSArray * _dismissButtonConstraints;
    UILayoutGuide * _mainContentGuide;
    NSArray * _mainContentGuideConstraints;
    UIView<PRXTextContainer> * _titleView;
    NSArray * _titleViewConstraints;
}

@property (nonatomic, retain) UIView<PRXTextContainer> *bodyView;
@property (nonatomic, retain) PRXButton *dismissButton;
@property (nonatomic, readonly) UILayoutGuide *mainContentGuide;
@property (nonatomic, retain) UIView<PRXTextContainer> *titleView;

- (void).cxx_destruct;
- (id)bodyView;
- (id)dismissButton;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)mainContentGuide;
- (void)setBodyView:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)titleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
