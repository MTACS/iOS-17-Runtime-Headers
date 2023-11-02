
@interface CHPolygon : NSObject {
    double  _area;
    long long  _vertexCount;
    struct CGPoint { double x1; double x2; } * _vertices;
}

@property (nonatomic) double area;
@property (nonatomic, readonly) long long vertexCount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; }*vertices;

- (double)area;
- (void)dealloc;
- (id)description;
- (long long)edgeCountIntersectingLineSegment:(struct CHLineSegment { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)enumerateEdgesWithBlock:(id /* block */)arg1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithVertices:(struct CGPoint { double x1; double x2; }*)arg1 vertexCount:(long long)arg2;
- (id)polygonByIntersectingWithClipPolygon:(id)arg1;
- (id)polygonDrawing;
- (void)setArea:(double)arg1;
- (long long)vertexCount;
- (struct CGPoint { double x1; double x2; }*)vertices;

@end
