
@protocol PXAnonymousViewController <NSObject>

@required

- (bool)px_isVisible;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_layoutMargins;
- (struct CGSize { double x1; double x2; })px_referenceSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_safeAreaInsets;
- (struct CGSize { double x1; double x2; })px_windowReferenceSize;

@end
