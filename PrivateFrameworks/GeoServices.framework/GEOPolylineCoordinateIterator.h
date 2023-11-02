
@interface GEOPolylineCoordinateIterator : NSObject {
    struct { 
        unsigned int index; 
        float offset; 
    }  _current;
    struct { 
        unsigned int index; 
        float offset; 
    }  _end;
    struct { 
        unsigned int index; 
        float offset; 
    }  _previous;
}

@property (nonatomic, readonly) struct { unsigned int x1; float x2; } current;
@property (nonatomic, readonly) bool isCurrentValid;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } previous;

+ (id)iteratorWithRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void)advance;
- (struct { unsigned int x1; float x2; })current;
- (id)initWithRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (bool)isCurrentValid;
- (struct { unsigned int x1; float x2; })previous;

@end
