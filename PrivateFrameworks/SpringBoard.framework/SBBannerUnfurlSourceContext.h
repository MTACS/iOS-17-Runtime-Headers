
@interface SBBannerUnfurlSourceContext : NSObject <NSCopying, NSMutableCopying> {
    double  _cornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceCoordinateSpaceBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceVelocity;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceCoordinateSpaceBounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } referenceVelocity;

- (id)_copyWithClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceCoordinateSpaceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (struct CGPoint { double x1; double x2; })referenceVelocity;

@end
