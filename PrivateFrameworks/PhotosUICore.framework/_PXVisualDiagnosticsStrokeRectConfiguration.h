
@interface _PXVisualDiagnosticsStrokeRectConfiguration : NSObject <PXVisualDiagnosticsStrokeRectConfiguration> {
    double  _lineWidth;
    UIColor * _strokeColor;
}

@property (nonatomic) double lineWidth;
@property (nonatomic, copy) UIColor *strokeColor;

- (void).cxx_destruct;
- (id)init;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
