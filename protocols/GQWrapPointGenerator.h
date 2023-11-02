
@protocol GQWrapPointGenerator <NSObject>

@required

- (void)addWrapPoint:(GQDWrapPoint *)arg1;
- (void)clearWrapPoints;
- (void*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const void*)wrapPoints;

@end
