
@interface _UITextFieldPaddedMetricsProvider : NSObject <_UITextFieldMetricsProvider> {
    bool  _canIntrinsicHeightExceedContentHeight;
    double  _minimumIntrinsicHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
}

@property (nonatomic) bool canIntrinsicHeightExceedContentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumIntrinsicHeight;
@property (nonatomic, readonly) double naturalHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) bool shouldExtendCaretHeight;
@property (readonly) Class superclass;

- (bool)canIntrinsicHeightExceedContentHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithPerEdgePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithSymmetricalPadding:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (double)minimumIntrinsicHeight;
- (double)naturalHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setCanIntrinsicHeightExceedContentHeight:(bool)arg1;
- (void)setMinimumIntrinsicHeight:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldExtendCaretHeight;

@end
