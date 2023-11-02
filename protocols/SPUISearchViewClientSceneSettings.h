
@protocol SPUISearchViewClientSceneSettings <NSObject>

@required

- (double)distanceToTopOfIcons;
- (struct CGSize { double x1; double x2; })dockedSearchBarSize;
- (bool)isKeyboardPresented;
- (double)keyboardHeight;
- (double)keyboardProtectorHeight;
- (double)searchBarCornerRadius;
- (struct CGSize { double x1; double x2; })searchBarSize;
- (unsigned int)searchHeaderBackgroundContextID;
- (unsigned long long)searchHeaderBackgroundLayerRenderID;
- (unsigned int)searchHeaderBlurContextID;
- (unsigned long long)searchHeaderBlurLayerRenderID;
- (unsigned int)searchHeaderContextID;
- (unsigned long long)searchHeaderLayerRenderID;

@end
