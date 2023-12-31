
@protocol GEOMapBuildingSection <NSObject>

@required

- (double)baseHeight;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (double)height;

@end
