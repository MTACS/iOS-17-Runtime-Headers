
@interface CCUISensorAttributionPrivacyHeaderView : SBFView <CCUISensorAttributionViewAnimating> {
    UIImageView * _handImageView;
    UILabel * _staticPrivacyHeaderLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cachedExpandedRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedExpandedRect;
@property (nonatomic, retain) UIImageView *handImageView;
@property (nonatomic, retain) UILabel *staticPrivacyHeaderLabel;

- (void).cxx_destruct;
- (id)_filledPrivacyHandImage;
- (id)_imageSymbolConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedExpandedRect;
- (id)handImageView;
- (id)init;
- (void)setBlurRadius:(double)arg1;
- (void)setCachedExpandedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHandImageView:(id)arg1;
- (void)setStaticPrivacyHeaderLabel:(id)arg1;
- (void)sizeToFit;
- (id)staticPrivacyHeaderLabel;

@end
