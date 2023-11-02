
@interface _UIEditMenuPresentationLayout : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    long long  _arrowDirection;
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
    struct CGPoint { 
        double x; 
        double y; 
    }  _menuPosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _menuSourceRect;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) long long arrowDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } menuPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuSourceRect;

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (long long)arrowDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (id)description;
- (struct CGPoint { double x1; double x2; })menuPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuSourceRect;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setArrowDirection:(long long)arg1;
- (void)setContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMenuPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMenuSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
