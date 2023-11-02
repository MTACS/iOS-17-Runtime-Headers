
@interface GEOComposedRouteTrafficColorInfo : NSObject <NSSecureCoding> {
    unsigned long long  _color;
    double  _offsetMeters;
    struct { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic) unsigned long long color;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int x1; float x2; } routeCoordinate;

+ (bool)supportsSecureCoding;

- (id)_stringForColor:(unsigned long long)arg1;
- (unsigned long long)color;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)offsetMeters;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (void)setColor:(unsigned long long)arg1;
- (void)setOffsetMeters:(double)arg1;
- (void)setRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;

@end
