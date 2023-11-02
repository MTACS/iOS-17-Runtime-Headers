
@interface PXBannerView : UIView {
    PXBannerViewConfiguration * _configuration;
    <PXBannerViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
}

@property (nonatomic, copy) PXBannerViewConfiguration *configuration;
@property (nonatomic) <PXBannerViewDelegate> *delegate;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

- (void).cxx_destruct;
- (id)_createActionButton;
- (id)_createCancelButton;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleContinueButton:(id)arg1;
- (id)_labelWithSubtitle:(id)arg1;
- (id)_labelWithTitle:(id)arg1;
- (void)_reloadViews;
- (id)configuration;
- (id)delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
