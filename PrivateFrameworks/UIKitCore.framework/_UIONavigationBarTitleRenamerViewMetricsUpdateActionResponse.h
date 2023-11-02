
@interface _UIONavigationBarTitleRenamerViewMetricsUpdateActionResponse : BSActionResponse

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) double horizontalTextInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) unsigned int sourceContextId;
@property (nonatomic, readonly) unsigned long long sourceLayerRenderId;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)horizontalTextInset;
- (id)initWithRenderID:(unsigned long long)arg1 contextID:(unsigned int)arg2 intrinsicContentSize:(struct CGSize { double x1; double x2; })arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 horizontalTextInset:(double)arg5;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned int)sourceContextId;
- (unsigned long long)sourceLayerRenderId;

@end
