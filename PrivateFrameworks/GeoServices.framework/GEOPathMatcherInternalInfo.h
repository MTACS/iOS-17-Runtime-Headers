
@interface GEOPathMatcherInternalInfo : NSObject {
    NSString * _base64Path;
    NSArray * _matchedSegments;
    struct GEOPolylineCoordinateRange { 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } start; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _range;
}

@property (nonatomic, retain) NSString *base64Path;
@property (nonatomic, retain) NSArray *matchedSegments;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } range;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)base64Path;
- (id)matchedSegments;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })range;
- (void)setBase64Path:(id)arg1;
- (void)setMatchedSegments:(id)arg1;
- (void)setRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
