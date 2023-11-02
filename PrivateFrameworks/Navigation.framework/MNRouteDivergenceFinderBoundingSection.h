
@interface MNRouteDivergenceFinderBoundingSection : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    unsigned long long  _leafIndex;
    MNRouteDivergenceFinderBoundingSection * _left;
    double  _length;
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
    MNRouteDivergenceFinderBoundingSection * _right;
}

@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) bool isLeaf;
@property (nonatomic) unsigned long long leafIndex;
@property (nonatomic, retain) MNRouteDivergenceFinderBoundingSection *left;
@property (nonatomic) double length;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } range;
@property (nonatomic, retain) MNRouteDivergenceFinderBoundingSection *right;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendDescription:(id)arg1 indent:(unsigned long long)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)boundsDescription;
- (bool)containsCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (id)description;
- (bool)isLeaf;
- (unsigned long long)leafIndex;
- (id)leafSectionsIntersectingSection:(id)arg1 paddingMapPoints:(double)arg2;
- (id)left;
- (double)length;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })range;
- (id)right;
- (void)setBoundingRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeafIndex:(unsigned long long)arg1;
- (void)setLeft:(id)arg1;
- (void)setLength:(double)arg1;
- (void)setRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRight:(id)arg1;
- (void)traverseWithHandler:(id /* block */)arg1;
- (id)treeDescription;

@end
