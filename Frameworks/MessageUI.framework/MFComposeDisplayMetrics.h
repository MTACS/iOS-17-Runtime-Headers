
@interface MFComposeDisplayMetrics : NSObject {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _layoutMargins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } headerViewSeparatorInset;
@property (nonatomic, readonly) bool isCompactHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sendBarButtonItemImageInsets;
@property (nonatomic, readonly) double trailingButtonMidlineOffset;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })headerViewSeparatorInset;
- (bool)isCompactHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sendBarButtonItemImageInsets;
- (void)setLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTraitCollection:(id)arg1;
- (double)trailingButtonMidlineOffset;
- (id)traitCollection;

@end
