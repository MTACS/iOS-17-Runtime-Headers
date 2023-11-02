
@interface LUILogLocatorView : UIView {
    UIButton * _downArrowButton;
    UIButton * _screenshotButton;
    UICollectionView * _screenshotCollectionView;
    UIButton * _upArrowButton;
}

@property (nonatomic, retain) UIButton *downArrowButton;
@property (nonatomic, retain) UIButton *screenshotButton;
@property (nonatomic, retain) UICollectionView *screenshotCollectionView;
@property (nonatomic, retain) UIButton *upArrowButton;

- (void).cxx_destruct;
- (id)_createButtonWithImageName:(id)arg1;
- (id)_createElementStackViewWithElements:(id)arg1;
- (id)_createScreenshotCollectionView;
- (void)_setup;
- (id)downArrowButton;
- (void)handleOrientationChange:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)screenshotButton;
- (id)screenshotCollectionView;
- (void)setDownArrowButton:(id)arg1;
- (void)setScreenshotButton:(id)arg1;
- (void)setScreenshotCollectionView:(id)arg1;
- (void)setUpArrowButton:(id)arg1;
- (id)upArrowButton;

@end
