
@interface DelaunayTriangle : NSObject {
    float  _area;
    void _first;
    void _second;
    void _third;
}

@property (readonly) float area;
@property (readonly) void first;
@property (readonly) void second;
@property (readonly) void third;

- (float)area;
- (void)first;
- (id)initFirstsecondthird;
- (void)second;
- (void)third;

@end
