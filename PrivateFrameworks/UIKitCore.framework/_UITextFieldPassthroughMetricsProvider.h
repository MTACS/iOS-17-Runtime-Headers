
@interface _UITextFieldPassthroughMetricsProvider : NSObject <_UITextFieldMetricsProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double naturalHeight;
@property (nonatomic, readonly) bool shouldExtendCaretHeight;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (double)naturalHeight;
- (bool)shouldExtendCaretHeight;

@end
