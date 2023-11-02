
@protocol CSPresentationProviding <NSObject>

@required

- (<UICoordinateSpace> *)presentationCoordinateSpace;
- (NSArray *)presentationRegions;

@end
