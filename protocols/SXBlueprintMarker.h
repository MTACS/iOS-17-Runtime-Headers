
@protocol SXBlueprintMarker <NSObject>

@required

- (struct CGPoint { double x1; double x2; })approximateLocation;
- (<SXComponentAnchor> *)componentAnchor;
- (bool)isEqualToMarker:(id <SXBlueprintMarker>)arg1;
- (<SXComponent> *)leadingComponent;
- (NSArray *)path;
- (void)setComponentAnchor:(id <SXComponentAnchor>)arg1;
- (<SXComponent> *)trailingComponent;

@end
