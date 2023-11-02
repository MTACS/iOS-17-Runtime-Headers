
@interface CKBusinessMacToolbarView : UIView {
    UIImage * _bannerImage;
    NSData * _bannerImageData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _detailsPopoverFrame;
    UILabel * _fallbackTitleLabel;
    UIView * _leftItemView;
    double  _preferredHeight;
    bool  _showingInStandAloneWindow;
}

@property (nonatomic, retain) UIImage *bannerImage;
@property (nonatomic, retain) NSData *bannerImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } detailsPopoverFrame;
@property (nonatomic, retain) UILabel *fallbackTitleLabel;
@property (nonatomic, retain) UIView *leftItemView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) bool showingInStandAloneWindow;

- (void).cxx_destruct;
- (id)_generateScaledImageFromBannerData;
- (struct CGSize { double x1; double x2; })_maxSizeForImage:(id)arg1;
- (void)_updateBannerImage:(id)arg1;
- (id)bannerImage;
- (id)bannerImageData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })detailsPopoverFrame;
- (id)fallbackTitleLabel;
- (void)layoutSubviews;
- (id)leftItemView;
- (double)preferredHeight;
- (void)setBannerImage:(id)arg1;
- (void)setBannerImageData:(id)arg1;
- (void)setDetailsPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFallbackTitle:(id)arg1;
- (void)setFallbackTitleColor:(id)arg1;
- (void)setFallbackTitleLabel:(id)arg1;
- (void)setLeftItemView:(id)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setShowingInStandAloneWindow:(bool)arg1;
- (bool)showingInStandAloneWindow;
- (void)traitCollectionDidChange:(id)arg1;

@end
