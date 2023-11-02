
@interface HKAnnotationHorizontalLineSeriesStyle : NSObject {
    HKStrokeStyle * _lineStrokeStyle;
    HKAxisLabelStyle * _valueStyle;
}

@property (nonatomic, retain) HKStrokeStyle *lineStrokeStyle;
@property (nonatomic, retain) HKAxisLabelStyle *valueStyle;

- (void).cxx_destruct;
- (id)lineStrokeStyle;
- (void)setLineStrokeStyle:(id)arg1;
- (void)setValueStyle:(id)arg1;
- (id)valueStyle;

@end
