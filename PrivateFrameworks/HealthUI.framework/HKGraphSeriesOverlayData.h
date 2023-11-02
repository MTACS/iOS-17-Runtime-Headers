
@interface HKGraphSeriesOverlayData : NSObject {
    HKGraphSeries * _graphSeries;
    HKGraphSeriesBlockCoordinateList * _graphSeriesCoordinates;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _graphSeriesPointTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _graphSeriesScreenRect;
}

@property (nonatomic, readonly) HKGraphSeries *graphSeries;
@property (nonatomic, readonly) HKGraphSeriesBlockCoordinateList *graphSeriesCoordinates;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } graphSeriesPointTransform;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } graphSeriesScreenRect;

- (void).cxx_destruct;
- (id)graphSeries;
- (id)graphSeriesCoordinates;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })graphSeriesPointTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })graphSeriesScreenRect;
- (id)initWithGraphSeries:(id)arg1 graphSeriesScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 graphSeriesCoordinates:(id)arg3 graphSeriesPointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;

@end
