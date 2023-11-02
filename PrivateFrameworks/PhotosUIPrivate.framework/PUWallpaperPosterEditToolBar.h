
@interface PUWallpaperPosterEditToolBar : UIView {
    <PUWallpaperPosterEditToolbarDelegate> * _delegate;
    UIButton * _firstActionButton;
    UIButton * _fourthActionButton;
    NSArray * _leadingMenuElements;
    UIButton * _secondActionButton;
    UIButton * _thirdActionButton;
    NSArray * _trailingMenuElements;
}

@property (nonatomic) <PUWallpaperPosterEditToolbarDelegate> *delegate;
@property (nonatomic, retain) UIButton *firstActionButton;
@property (nonatomic, retain) UIButton *fourthActionButton;
@property (nonatomic, retain) NSArray *leadingMenuElements;
@property (nonatomic, retain) UIButton *secondActionButton;
@property (nonatomic, retain) UIButton *thirdActionButton;
@property (nonatomic, retain) NSArray *trailingMenuElements;

- (void).cxx_destruct;
- (id)_createActionButton;
- (void)_removeMenuElement:(id)arg1 fromButton:(id)arg2;
- (void)_setMenuElement:(id)arg1 onButton:(id)arg2;
- (void)_setMenuElements:(id)arg1 oldMenuElements:(id)arg2 onButtonOne:(id)arg3 onButtonTwo:(id)arg4;
- (void)_setupView;
- (id)delegate;
- (id)firstActionButton;
- (id)fourthActionButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leadingMenuElements;
- (id)secondActionButton;
- (void)setDelegate:(id)arg1;
- (void)setFirstActionButton:(id)arg1;
- (void)setFourthActionButton:(id)arg1;
- (void)setLeadingMenuElements:(id)arg1;
- (void)setSecondActionButton:(id)arg1;
- (void)setThirdActionButton:(id)arg1;
- (void)setTrailingMenuElements:(id)arg1;
- (id)thirdActionButton;
- (id)trailingMenuElements;

@end
