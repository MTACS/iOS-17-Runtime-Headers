
@interface _UICollectionViewListAccessoryDisclosure : UIControl <UIMenuForcedAutomaticSelectionDelegate, _UICollectionViewListAccessoryDisclosureView> {
    UIColor * _accessoryTintColor;
    id /* block */  _actionHandler;
    <UITableConstants> * _constants;
    UIImage * _image;
    UIImageView * _imageView;
    UIMenu * _menu;
    bool  _rotated;
    double  _rotationAngle;
    id /* block */  _selectedElementDidChangeHandler;
}

@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic, readonly) UIControl *control;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic) bool rotated;
@property (nonatomic) double rotationAngle;
@property (nonatomic, copy) id /* block */ selectedElementDidChangeHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (double)_enforcedWidthForWidth:(double)arg1;
- (void)_executeActionHandler;
- (struct CGSize { double x1; double x2; })_minimumSizeForHitTesting;
- (void)_updateRotation;
- (id)accessoryTintColor;
- (id /* block */)actionHandler;
- (id)constants;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)control;
- (void)forcedSelectionOfMenu:(id)arg1 willChangeTo:(id)arg2;
- (id)image;
- (id)initWithConstants:(id)arg1;
- (void)layoutSubviews;
- (id)menu;
- (bool)rotated;
- (double)rotationAngle;
- (id /* block */)selectedElementDidChangeHandler;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConstants:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setSelectedElementDidChangeHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
