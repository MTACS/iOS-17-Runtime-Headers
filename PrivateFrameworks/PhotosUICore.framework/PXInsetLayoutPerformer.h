
@interface PXInsetLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutInsets;
    NSArray * children;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; } layoutInput;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, retain) PXLayoutPerformerOutput *layoutOutput;

+ (struct CGSize { double x1; double x2; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })arg1 layoutOutput:(id)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)children;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (struct CGSize { double x1; double x2; })performLayout;
- (void)prepareForReuse;
- (void)setChildren:(id)arg1;
- (void)setLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
