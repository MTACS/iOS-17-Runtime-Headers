
@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer {
    NSArray * children;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } layoutRect; 
        bool onlyCalculateSize; 
        struct { 
            long long contentSizeCategory; 
            long long layoutDirection; 
            long long layoutSizeClass; 
            long long layoutOrientation; 
        } layoutAttributes; 
    }  layoutInput;
    PXLayoutPerformerOutput * layoutOutput;
}

- (void).cxx_destruct;
- (id)children;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })layoutInput;
- (id)layoutOutput;
- (struct CGSize { double x1; double x2; })performLayout;
- (void)setLayoutInput:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (void)setLayoutOutput:(id)arg1;

@end
