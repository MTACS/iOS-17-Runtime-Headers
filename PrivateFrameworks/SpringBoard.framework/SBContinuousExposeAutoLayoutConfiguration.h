
@interface SBContinuousExposeAutoLayoutConfiguration : NSObject {
    SBSwitcherChamoisLayoutAttributes * _chamoisLayoutAttributes;
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
    double  _dockHeightWithBottomEdgePadding;
    double  _screenScale;
}

@property (nonatomic, readonly) SBSwitcherChamoisLayoutAttributes *chamoisLayoutAttributes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerBounds;
@property (nonatomic, readonly) double dockHeightWithBottomEdgePadding;
@property (nonatomic, readonly) double screenScale;

- (void).cxx_destruct;
- (id)chamoisLayoutAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (double)dockHeightWithBottomEdgePadding;
- (id)initWithContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screenScale:(double)arg2 dockHeightWithBottomEdgePadding:(double)arg3 chamoisLayoutAttributes:(id)arg4;
- (double)screenScale;

@end
