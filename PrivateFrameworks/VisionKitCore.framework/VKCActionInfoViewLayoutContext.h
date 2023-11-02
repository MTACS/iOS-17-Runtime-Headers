
@interface VKCActionInfoViewLayoutContext : NSObject {
    bool  _animateItemVisibilityChanges;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerBounds;
    double  _currentMaxX;
    double  _currentMinX;
    bool  _didAddLeadingItem;
    bool  _didAddTrailingItem;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSMutableArray * _leadingLayout;
    double  _padding;
    double  _scale;
    bool  _showingMoreButton;
    NSMutableArray * _trailingLayout;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _transform;
}

@property (nonatomic) bool animateItemVisibilityChanges;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerBounds;
@property (nonatomic) double currentMaxX;
@property (nonatomic) double currentMinX;
@property (nonatomic) bool didAddLeadingItem;
@property (nonatomic) bool didAddTrailingItem;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) NSMutableArray *leadingLayout;
@property (nonatomic) double padding;
@property (nonatomic, readonly) double remainingWidth;
@property (nonatomic) double scale;
@property (nonatomic) bool showingMoreButton;
@property (nonatomic, retain) NSMutableArray *trailingLayout;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;

- (void).cxx_destruct;
- (bool)animateItemVisibilityChanges;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (double)currentMaxX;
- (double)currentMinX;
- (bool)didAddLeadingItem;
- (bool)didAddTrailingItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)init;
- (id)leadingLayout;
- (double)padding;
- (double)remainingWidth;
- (void)reset;
- (double)scale;
- (void)setAnimateItemVisibilityChanges:(bool)arg1;
- (void)setContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentMaxX:(double)arg1;
- (void)setCurrentMinX:(double)arg1;
- (void)setDidAddLeadingItem:(bool)arg1;
- (void)setDidAddTrailingItem:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeadingLayout:(id)arg1;
- (void)setPadding:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setShowingMoreButton:(bool)arg1;
- (void)setTrailingLayout:(id)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (bool)showingMoreButton;
- (id)trailingLayout;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;

@end
