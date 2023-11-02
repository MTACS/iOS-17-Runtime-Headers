
@interface MKPolygonView : MKOverlayPathView

@property (nonatomic, readonly) MKPolygon *polygon;

- (void)createPath;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithPolygon:(id)arg1;
- (id)polygon;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

@end
