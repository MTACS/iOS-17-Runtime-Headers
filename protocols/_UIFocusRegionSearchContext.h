
@protocol _UIFocusRegionSearchContext <NSObject>

@required

- (void)addRegion:(_UIFocusRegion *)arg1;
- (void)addRegions:(NSArray *)arg1;
- (void)addRegionsInContainer:(id <_UIFocusRegionContainer>)arg1;
- (void)addRegionsInContainers:(NSArray *)arg1;
- (<UICoordinateSpace> *)coordinateSpace;
- (UIFocusSystem *)focusSystem;
- (void)markContainerAsProvidingDynamicContent;
- (_UIFocusMovementInfo *)movementInfo;
- (UIScreen *)screen;
- (<_UIFocusMapArea> *)searchArea;
- (_UIFocusSearchInfo *)searchInfo;

@end
