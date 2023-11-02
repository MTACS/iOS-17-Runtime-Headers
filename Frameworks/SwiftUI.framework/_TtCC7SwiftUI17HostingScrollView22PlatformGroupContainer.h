
@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : UIView <UIFocusItem, UIFocusItemContainer, _UIFocusRegionContainer> {
    void _focusableBorder;
    void _focusableBounds;
    void _focusableFillerBounds;
    void _pixelLength;
    void fillerItems;
    void requestedFocusItem;
    void scrollView;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

+ (bool)_supportsInvalidatingFocusCache;

- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;

@end
