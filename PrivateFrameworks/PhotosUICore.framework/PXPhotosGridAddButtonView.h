
@interface PXPhotosGridAddButtonView : UIView <PXGReusableView> {
    UIButton * _button;
    UIImage * _buttonImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    PXUpdater * _updater;
    PXPhotosGridAddButtonViewUserData * _userData;
}

@property (nonatomic, readonly) id /* block */ actionHandler;
@property (nonatomic, retain) UIImage *buttonImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) PXPhotosGridAddButtonViewUserData *userData;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateBackgroundProperties;
- (void)_updateButtonImage;
- (id /* block */)actionHandler;
- (void)becomeReusable;
- (id)buttonImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setButtonImage:(id)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)userData;

@end
