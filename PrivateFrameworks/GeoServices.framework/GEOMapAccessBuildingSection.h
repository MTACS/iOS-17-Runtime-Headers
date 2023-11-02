
@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection> {
    double  _baseHeight;
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    unsigned long long  _coordinateCount;
    struct { double x1; double x2; } * _coordinates;
    double  _height;
    double  _radius;
    unsigned long long  _sectionIndex;
}

@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double radius;
@property (readonly) Class superclass;

- (double)baseHeight;
- (struct { double x1; double x2; })centerCoordinate;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (void)dealloc;
- (double)height;
- (id)initWithFeature:(id)arg1 sectionIndex:(unsigned long long)arg2;
- (double)radius;

@end
