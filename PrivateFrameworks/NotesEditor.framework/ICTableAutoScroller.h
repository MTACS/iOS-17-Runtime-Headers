
@interface ICTableAutoScroller : NSObject {
    NSTimer * _autoscrollTimer;
    double  _bottomThresholdDistance;
    <ICTableAutoScrollerDelegate> * _delegate;
    ICTableScrollView * _horizontalScrollView;
    bool  _isScrolling;
    unsigned long long  _scrollDirectionMode;
    ICTableAttachmentViewController * _tableAttachmentViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    UIScrollView * _targetScrollView;
    double  _topThresholdDistance;
    UIScrollView * _verticalScrollView;
}

@property (nonatomic, retain) NSTimer *autoscrollTimer;
@property (nonatomic) double bottomThresholdDistance;
@property (nonatomic) <ICTableAutoScrollerDelegate> *delegate;
@property (nonatomic) ICTableScrollView *horizontalScrollView;
@property (nonatomic) bool isScrolling;
@property (nonatomic) unsigned long long scrollDirectionMode;
@property (nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (nonatomic, readonly) UIScrollView *targetScrollView;
@property (nonatomic) double topThresholdDistance;
@property (nonatomic) UIScrollView *verticalScrollView;

- (void).cxx_destruct;
- (void)autoScrollWithScrollFactor:(double)arg1 scrollDirectionMode:(unsigned long long)arg2;
- (id)autoscrollTimer;
- (double)bottomThresholdDistance;
- (id)delegate;
- (id)horizontalScrollView;
- (id)initWithTableAttachmentViewController:(id)arg1 scrollDirectionMode:(unsigned long long)arg2;
- (bool)isScrolling;
- (unsigned long long)scrollDirectionMode;
- (double)scrollFactorForScrollDirectionMode:(unsigned long long)arg1;
- (void)setAutoscrollTimer:(id)arg1;
- (void)setBottomThresholdDistance:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalScrollView:(id)arg1;
- (void)setIsScrolling:(bool)arg1;
- (void)setScrollDirectionMode:(unsigned long long)arg1;
- (void)setTableAttachmentViewController:(id)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopThresholdDistance:(double)arg1;
- (void)setVerticalScrollView:(id)arg1;
- (void)stopAndInvalidate;
- (void)stopAutoscrollTimer;
- (id)tableAttachmentViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (id)targetScrollView;
- (double)topThresholdDistance;
- (void)updateAutoscrollTimer:(id)arg1;
- (id)verticalScrollView;

@end
