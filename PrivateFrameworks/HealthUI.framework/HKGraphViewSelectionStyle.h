
@interface HKGraphViewSelectionStyle : NSObject {
    HKStrokeStyle * _selectedPointLineStrokeStyle;
    HKStrokeStyle * _touchPointLineStrokeStyle;
    double  _unselectedSeriesAlpha;
}

@property (nonatomic, retain) HKStrokeStyle *selectedPointLineStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *touchPointLineStrokeStyle;
@property (nonatomic) double unselectedSeriesAlpha;

- (void).cxx_destruct;
- (id)selectedPointLineStrokeStyle;
- (void)setSelectedPointLineStrokeStyle:(id)arg1;
- (void)setTouchPointLineStrokeStyle:(id)arg1;
- (void)setUnselectedSeriesAlpha:(double)arg1;
- (id)touchPointLineStrokeStyle;
- (double)unselectedSeriesAlpha;

@end
