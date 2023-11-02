
@interface PXOverlayFeedLayoutMetrics : PXLayoutMetrics {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _firstRowTopMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    double  _largeItemAspectRatio;
    double  _regularItemAspectRatio;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double firstRowTopMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) double largeItemAspectRatio;
@property (nonatomic) double regularItemAspectRatio;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)firstRowTopMargin;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (double)largeItemAspectRatio;
- (double)regularItemAspectRatio;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFirstRowTopMargin:(double)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setLargeItemAspectRatio:(double)arg1;
- (void)setRegularItemAspectRatio:(double)arg1;

@end
