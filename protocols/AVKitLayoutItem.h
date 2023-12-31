
@protocol AVKitLayoutItem <NSObject>

@required

- (NSArray *)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id <AVKitLayoutItem>)arg1;
- (NSArray *)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id <AVKitLayoutItem>)arg1;
- (NSArray *)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize { double x1; double x2; })arg1;
- (NSArray *)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id <AVKitLayoutItem>)arg1;
- (NSLayoutYAxisAnchor *)bottomAnchor;
- (NSLayoutXAxisAnchor *)centerXAnchor;
- (NSLayoutYAxisAnchor *)centerYAnchor;
- (NSLayoutDimension *)heightAnchor;
- (NSLayoutXAxisAnchor *)leadingAnchor;
- (NSLayoutXAxisAnchor *)leftAnchor;
- (NSLayoutXAxisAnchor *)rightAnchor;
- (NSLayoutYAxisAnchor *)topAnchor;
- (NSLayoutXAxisAnchor *)trailingAnchor;
- (NSLayoutDimension *)widthAnchor;

@end
