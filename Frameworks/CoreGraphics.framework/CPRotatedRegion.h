
@interface CPRotatedRegion : CPRegion {
    bool  dirtyNormalizedBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  normalizedBounds;
}

- (struct CGPoint { double x1; double x2; })anchor;
- (double)bottom;
- (double)center;
- (void)fitBoundsToChildren;
- (id)init;
- (double)left;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBounds;
- (void)resizeWith:(id)arg1;
- (double)right;
- (double)top;

@end
