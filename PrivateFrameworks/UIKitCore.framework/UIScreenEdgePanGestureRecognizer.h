
@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate> {
    id /* block */  _createFeatureBlock;
    unsigned long long  _edges;
    _UISEMuxGestureFeature * _rootFeature;
    _UISEGestureFeatureSettings * _settings;
    unsigned long long  _touchedEdges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldDefaultToTouches;
+ (bool)_shouldSupportStylusTouches;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_bottomEdgeAngleWindow;
- (double)_bottomEdgeRegionSize;
- (double)_edgeRegionSize;
- (void)_setBottomEdgeAngleWindow:(double)arg1;
- (void)_setBottomEdgeRegionSize:(double)arg1;
- (void)_setEdgeRegionSize:(double)arg1;
- (void)_setHysteresis:(double)arg1;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (long long)_touchInterfaceOrientation;
- (id)debugDictionary;
- (unsigned long long)edges;
- (void)encodeWithCoder:(id)arg1;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (void)reset;
- (void)setEdges:(unsigned long long)arg1;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (unsigned long long)touchedEdges;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
