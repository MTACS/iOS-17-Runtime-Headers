
@protocol PXLayoutPerformer

@required

+ (struct CGSize { double x1; double x2; })performLayoutWithLayoutInput:(void *)arg1 layoutOutput:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; }, PXLayoutPerformerOutput *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXLayoutPerformer> *, void*

- (NSArray *)children;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })layoutInput;
- (PXLayoutPerformerOutput *)layoutOutput;
- (struct CGSize { double x1; double x2; })performLayout;
- (void)prepareForReuse;
- (void)setLayoutInput:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (void)setLayoutOutput:(PXLayoutPerformerOutput *)arg1;

@end
