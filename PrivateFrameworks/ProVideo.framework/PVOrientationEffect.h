
@interface PVOrientationEffect : PVHeliumEffect {
    double  _animationTime;
    unsigned int  _inputID;
    int  _oldInputID;
    bool  _oldShowAlt;
    bool  _showAlt;
    double  _switchSetTime;
    double  _switchTime;
    <PVEffectTimeNotificationDelegate> * _timeNotificationDelegate;
}

@property (nonatomic) double animationTime;
@property (nonatomic) unsigned int inputID;
@property (nonatomic) int oldInputID;
@property (nonatomic) bool oldShowAlt;
@property (nonatomic) bool showAlt;
@property (nonatomic) double switchSetTime;
@property (nonatomic) double switchTime;
@property <PVEffectTimeNotificationDelegate> *timeNotificationDelegate;

+ (void)registerEffectWithID:(id)arg1 displayName:(id)arg2;

- (void).cxx_destruct;
- (double)animationTime;
- (void)dealloc;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (id)initWithEffectID:(id)arg1;
- (unsigned int)inputID;
- (id)inputsForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)oldInputID;
- (bool)oldShowAlt;
- (void)orientationChangeRequest:(id)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(void*)arg4;
- (struct HGRef<HGXForm> { struct HGXForm {} *x1; })rotationNodeForPercent:(float)arg1 atCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAnimationTime:(double)arg1;
- (void)setInputID:(unsigned int)arg1;
- (void)setOldInputID:(int)arg1;
- (void)setOldShowAlt:(bool)arg1;
- (void)setShowAlt:(bool)arg1;
- (void)setSwitchSetTime:(double)arg1;
- (void)setSwitchTime:(double)arg1;
- (void)setTimeNotificationDelegate:(id)arg1;
- (bool)showAlt;
- (double)switchSetTime;
- (double)switchTime;
- (id)timeNotificationDelegate;

@end
