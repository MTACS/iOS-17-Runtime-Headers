
@interface _UISEGestureFeatureSettings : NSObject <_UISEGestureFeatureSettings> {
    double  _backProjectTime;
    double  _bottomEdgeAngleWindow;
    double  _bottomEdgeRegionSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _cornerAngleWindow;
    double  _edgeAngleWindow;
    double  _edgeAngleWindowDecayTime;
    double  _edgeRegionSize;
    double  _hysteresis;
    unsigned long long  _interfaceBottomEdge;
    double  _maximumBackProjectTimeFactor;
    double  _maximumSwipeDuration;
    unsigned long long  _minimumNumberOfSubfeatures;
    unsigned long long  _targetEdges;
}

@property (nonatomic) double backProjectTime;
@property (nonatomic) double bottomEdgeAngleWindow;
@property (nonatomic) double bottomEdgeRegionSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double edgeAngleWindowDecayTime;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long interfaceBottomEdge;
@property (nonatomic) double maximumBackProjectTimeFactor;
@property (nonatomic) double maximumSwipeDuration;
@property (nonatomic) unsigned long long minimumNumberOfSubfeatures;
@property (nonatomic) unsigned long long targetEdges;

- (double)backProjectTime;
- (double)bottomEdgeAngleWindow;
- (double)bottomEdgeRegionSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)cornerAngleWindow;
- (double)edgeAngleWindow;
- (double)edgeAngleWindowDecayTime;
- (double)edgeRegionSize;
- (double)hysteresis;
- (id)init;
- (unsigned long long)interfaceBottomEdge;
- (double)maximumBackProjectTimeFactor;
- (double)maximumSwipeDuration;
- (unsigned long long)minimumNumberOfSubfeatures;
- (void)setBackProjectTime:(double)arg1;
- (void)setBottomEdgeAngleWindow:(double)arg1;
- (void)setBottomEdgeRegionSize:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerAngleWindow:(double)arg1;
- (void)setEdgeAngleWindow:(double)arg1;
- (void)setEdgeAngleWindowDecayTime:(double)arg1;
- (void)setEdgeRegionSize:(double)arg1;
- (void)setHysteresis:(double)arg1;
- (void)setInterfaceBottomEdge:(unsigned long long)arg1;
- (void)setMaximumBackProjectTimeFactor:(double)arg1;
- (void)setMaximumSwipeDuration:(double)arg1;
- (void)setMinimumNumberOfSubfeatures:(unsigned long long)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (unsigned long long)targetEdges;

@end
