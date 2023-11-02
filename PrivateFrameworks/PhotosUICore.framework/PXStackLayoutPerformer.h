
@interface PXStackLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    long long  _layoutAxis;
    NSArray * children;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) long long layoutAxis;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; } layoutInput;
@property (nonatomic, retain) PXLayoutPerformerOutput *layoutOutput;

+ (struct CGSize { double x1; double x2; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })arg1 layoutOutput:(id)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_calculateSizeForLayout;
- (void)_performLayoutPass;
- (id)children;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (struct CGSize { double x1; double x2; })itemSize;
- (long long)layoutAxis;
- (struct CGSize { double x1; double x2; })performLayout;
- (void)prepareForReuse;
- (void)setChildren:(id)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutAxis:(long long)arg1;

@end
