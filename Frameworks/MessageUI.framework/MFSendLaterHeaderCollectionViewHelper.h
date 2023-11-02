
@interface MFSendLaterHeaderCollectionViewHelper : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    double  _longestDateWidth;
    double  _longestTimeWidth;
    double  _sendLaterLabelWidth;
    double  _viewScale;
    double  _width;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic) double longestDateWidth;
@property (nonatomic) double longestTimeWidth;
@property (nonatomic) double sendLaterLabelWidth;
@property (nonatomic) double viewScale;
@property (nonatomic) double width;
@property (nonatomic, readonly) bool willContentTruncate;

- (id)initWithWidth:(double)arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 viewScale:(double)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (double)longestDateWidth;
- (double)longestTimeWidth;
- (void)precalculateWidthsWithDescription:(id)arg1;
- (double)sendLaterLabelWidth;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLongestDateWidth:(double)arg1;
- (void)setLongestTimeWidth:(double)arg1;
- (void)setSendLaterLabelWidth:(double)arg1;
- (void)setViewScale:(double)arg1;
- (void)setWidth:(double)arg1;
- (bool)updateLayoutMarginsIfNeeded:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)updateWidthIfNeeded:(double)arg1;
- (double)viewScale;
- (double)width;
- (bool)willContentTruncate;

@end
