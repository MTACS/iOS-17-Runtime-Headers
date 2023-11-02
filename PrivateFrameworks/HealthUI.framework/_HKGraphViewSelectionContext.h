
@interface _HKGraphViewSelectionContext : NSObject {
    HKGraphSeries * _closestSeriesToSelection;
    NSArray * _selectedRangeBoundariesXValue;
    NSArray * _selectionAreaMapping;
    long long  _selectionState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _seriesSelectionRect;
    NSArray * _touchPoints;
}

@property (nonatomic, retain) HKGraphSeries *closestSeriesToSelection;
@property (nonatomic, readonly) double minimumSelectionDistance;
@property (nonatomic, retain) NSArray *selectedRangeBoundariesXValue;
@property (nonatomic, retain) NSArray *selectionAreaMapping;
@property (nonatomic) long long selectionState;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } seriesSelectionRect;
@property (nonatomic, retain) NSArray *touchPoints;

- (void).cxx_destruct;
- (id)closestSeriesToSelection;
- (double)minimumSelectionDistance;
- (id)selectedRangeBoundariesXValue;
- (id)selectionAreaMapping;
- (long long)selectionState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })seriesSelectionRect;
- (void)setClosestSeriesToSelection:(id)arg1;
- (void)setSelectedRangeBoundariesXValue:(id)arg1;
- (void)setSelectionAreaMapping:(id)arg1;
- (void)setSelectionState:(long long)arg1;
- (void)setSeriesSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTouchPoints:(id)arg1;
- (id)touchPoints;

@end
