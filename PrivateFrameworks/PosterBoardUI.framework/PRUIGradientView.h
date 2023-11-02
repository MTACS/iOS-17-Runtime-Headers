
@interface PRUIGradientView : UIView

@property (nonatomic, copy) NSArray *colors;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

+ (Class)layerClass;

- (id)colors;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)layer;
- (id)locations;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocations:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end