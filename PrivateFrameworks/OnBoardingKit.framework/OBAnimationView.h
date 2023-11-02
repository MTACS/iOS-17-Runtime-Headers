
@interface OBAnimationView : UIView {
    <OBAnimationAppearanceChangeDelegate> * _appearanceChangeDelegate;
    bool  _flipForRTL;
    CAPackage * _package;
    CALayer * _packageLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preferredFrame;
    double  _scale;
}

@property (nonatomic) <OBAnimationAppearanceChangeDelegate> *appearanceChangeDelegate;
@property bool flipForRTL;
@property (nonatomic, retain) CAPackage *package;
@property (nonatomic, retain) CALayer *packageLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredFrame;
@property double scale;

- (void).cxx_destruct;
- (void)_setPackage:(id)arg1;
- (id)appearanceChangeDelegate;
- (double)defaultScale;
- (bool)flipForRTL;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)package;
- (id)packageLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredFrame;
- (double)scale;
- (void)setAppearanceChangeDelegate:(id)arg1;
- (void)setFlipForRTL:(bool)arg1;
- (void)setPackage:(id)arg1;
- (void)setPackage:(id)arg1 sizingTransformScale:(double)arg2;
- (void)setPackageLayer:(id)arg1;
- (void)setPreferredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
