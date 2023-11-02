
@interface TUIKeyboardPathEffectView : UIView <TUIKeyboardPathRendererDataSource> {
    bool  _createdMTKView;
    bool  _done;
    bool  _increasedContrastEnabled;
    MTKView * _mtkView;
    NSMutableArray * _paths;
    CADisplayLink * _pointDecayDisplayLink;
    NSMutableIndexSet * _pointDecayQueue;
    TUIKBHandwritingQuadCurvePointFIFO * _pointInterpolator;
    TUIKeyboardPathRenderer * _renderer;
    double  _startTime;
}

@property (nonatomic) bool createdMTKView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool done;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool increasedContrastEnabled;
@property (nonatomic, retain) MTKView *mtkView;
@property (nonatomic, retain) NSMutableArray *paths;
@property (nonatomic, retain) CADisplayLink *pointDecayDisplayLink;
@property (nonatomic, retain) NSMutableIndexSet *pointDecayQueue;
@property (nonatomic, retain) TUIKBHandwritingQuadCurvePointFIFO *pointInterpolator;
@property (nonatomic, retain) TUIKeyboardPathRenderer *renderer;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDrawingPoint:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 sentinel:(bool)arg3;
- (void)_clearPointInterpolators;
- (id)_currentPath;
- (struct { double x1; double x2; double x3; double x4; })_currentThemeSettings;
- (id)_pushNewPath;
- (void)accessibilityValueChanged:(id)arg1;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2 timestamp:(double)arg3;
- (void)buildOut;
- (void)createMTKViewIfNecessary;
- (bool)createdMTKView;
- (void)didMoveToWindow;
- (bool)done;
- (bool)increasedContrastEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)keyboardAppearance;
- (void)layoutSubviews;
- (id)mtkView;
- (id)paths;
- (id)pathsToRender;
- (id)pointDecayDisplayLink;
- (id)pointDecayQueue;
- (id)pointInterpolator;
- (id)renderer;
- (void)reset;
- (void)setCreatedMTKView:(bool)arg1;
- (void)setDone:(bool)arg1;
- (void)setIncreasedContrastEnabled:(bool)arg1;
- (void)setMtkView:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)setPointDecayDisplayLink:(id)arg1;
- (void)setPointDecayQueue:(id)arg1;
- (void)setPointInterpolator:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (int)textEffectsVisibilityLevel;
- (void)updatePaths;

@end
