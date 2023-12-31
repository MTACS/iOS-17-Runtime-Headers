
@interface MFPhoneRegion : MFRegion {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_bounds;
    OITSUBezierPath * m_path;
}

- (void).cxx_destruct;
- (int)fill:(id)arg1 in_brush:(id)arg2;
- (int)frame:(id)arg1 in_brush:(id)arg2;
- (id)initWithPath:(id)arg1 in_bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithRects:(id)arg1 in_bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 in_dc:(id)arg3;
- (int)invert:(id)arg1;
- (id)pathForClippingWithDeviceContext:(id)arg1;

@end
