
@interface UIKeyboardPathEffectView : UIView {
    bool  _done;
    bool  _increasedContrastEnabled;
    NSMutableArray * _paths;
    CADisplayLink * _pointDecayDisplayLink;
    NSMutableIndexSet * _pointDecayQueue;
    UIKBHandwritingQuadCurvePointFIFO * _pointInterpolator;
    double  _startTime;
}

@property (nonatomic) bool done;
@property (nonatomic) bool increasedContrastEnabled;
@property (nonatomic, retain) NSMutableArray *paths;
@property (nonatomic, retain) CADisplayLink *pointDecayDisplayLink;
@property (nonatomic, retain) NSMutableIndexSet *pointDecayQueue;
@property (nonatomic, retain) UIKBHandwritingQuadCurvePointFIFO *pointInterpolator;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (void)_addDrawingPoint:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 sentinel:(bool)arg3;
- (void)_clearPointInterpolators;
- (id)_currentPath;
- (struct { double x1; double x2; double x3; double x4; })_currentThemeSettings;
- (void)_displayLinkFired:(id)arg1;
- (id)_pushNewPath;
- (void)accessibilityValueChanged:(id)arg1;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 timestamp:(double)arg3;
- (void)buildOut;
- (void)didMoveToWindow;
- (bool)done;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)increasedContrastEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)keyboardAppearance;
- (id)paths;
- (id)pointDecayDisplayLink;
- (id)pointDecayQueue;
- (id)pointInterpolator;
- (void)reset;
- (void)setDone:(bool)arg1;
- (void)setIncreasedContrastEnabled:(bool)arg1;
- (void)setPaths:(id)arg1;
- (void)setPointDecayDisplayLink:(id)arg1;
- (void)setPointDecayQueue:(id)arg1;
- (void)setPointInterpolator:(id)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (int)textEffectsVisibilityLevel;

@end
