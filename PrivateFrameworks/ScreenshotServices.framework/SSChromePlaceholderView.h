
@interface SSChromePlaceholderView : UIView <UINavigationBarDelegate> {
    VKImageAnalysisBarButtonItem * _aaBarButtonItem;
    VKSelectableBarButtonItem * _annotationEnabledButton;
    NSArray * _barItems;
    double  _contentAlpha;
    UIBarButtonItem * _deleteItem;
    UIBarButtonItem * _doneItem;
    UINavigationItem * _managedNavigationItem;
    SSVellumOpacityControl * _opacityControl;
    UIBarButtonItem * _opacityItem;
    UIView * _opacityView;
    UIBarButtonItem * _redoItem;
    UIBarButtonItem * _shareItem;
    UINavigationBar * _topBar;
    UINavigationBar * _topBarBackground;
    UIView * _topBarSeparatorLine;
    UIBarButtonItem * _undoItem;
    UIBarButtonItem * _undoRedoSpacerItem;
}

@property (nonatomic) double contentAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeBarButtonItems;
- (void)_layoutTopBar;
- (void)_updateBarButtonItemPositionsAnimated:(bool)arg1;
- (double)contentAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setContentAlpha:(double)arg1;
- (double)topBarHeight;

@end
