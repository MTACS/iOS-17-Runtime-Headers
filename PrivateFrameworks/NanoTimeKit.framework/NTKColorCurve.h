
@interface NTKColorCurve : NSObject {
    NSArray * _colorCurveElements;
}

@property (nonatomic, readonly) NSArray *colorCurveElements;

- (void).cxx_destruct;
- (id)colorCurveElements;
- (id)colorForFraction:(float)arg1;
- (id)initWithColorCurveElements:(id)arg1;

@end
