
@interface HKGraphViewRendererSeriesRow : NSObject {
    <HKGraphSeriesAxisAnnotation> * _axisAnnotationHandler;
    HKGraphSeries * _mainSeriesForRow;
    NSArray * _overlaidSeries;
    NSArray * _selectedRangeBoundariesXValue;
    HKGraphSeries * _selectedSeriesForRow;
    long long  _selectedTouchPointCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _yAxisRect;
}

@property (nonatomic, readonly) <HKGraphSeriesAxisAnnotation> *axisAnnotationHandler;
@property (nonatomic, readonly) HKGraphSeries *mainSeriesForRow;
@property (nonatomic, readonly) NSArray *overlaidSeries;
@property (nonatomic, readonly) NSArray *selectedRangeBoundariesXValue;
@property (nonatomic, readonly) HKGraphSeries *selectedSeriesForRow;
@property (nonatomic, readonly) long long selectedTouchPointCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } yAxisRect;

- (void).cxx_destruct;
- (id)axisAnnotationHandler;
- (id)initWithRowSeries:(id)arg1 mainSeriesForRow:(id)arg2 selectedSeriesForRow:(id)arg3 selectedRangeBoundariesXValue:(id)arg4 selectedTouchPointCount:(long long)arg5 yAxisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 axisAnnotationHandler:(id)arg7;
- (id)mainSeriesForRow;
- (id)overlaidSeries;
- (id)selectedRangeBoundariesXValue;
- (id)selectedSeriesForRow;
- (long long)selectedTouchPointCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })yAxisRect;

@end
