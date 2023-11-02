
@interface GEOCoordinateArraySupportPoint : NSObject <NSSecureCoding> {
    double  _heading;
    unsigned long long  _index;
    bool  _isUTurn;
    int  _legacyFormOfWay;
    int  _legacyRoadClass;
    long long  _matchType;
    long long  _roadID;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic) double heading;
@property (nonatomic) unsigned long long index;
@property (nonatomic) bool isUTurn;
@property (nonatomic) int legacyFormOfWay;
@property (nonatomic) int legacyRoadClass;
@property (nonatomic) long long matchType;
@property (nonatomic) long long roadID;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)heading;
- (unsigned long long)index;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isUTurn;
- (int)legacyFormOfWay;
- (int)legacyRoadClass;
- (long long)matchType;
- (long long)roadID;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (void)setHeading:(double)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setIsUTurn:(bool)arg1;
- (void)setLegacyFormOfWay:(int)arg1;
- (void)setLegacyRoadClass:(int)arg1;
- (void)setMatchType:(long long)arg1;
- (void)setRoadID:(long long)arg1;
- (void)setRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;

@end
