
@interface BKUICurvesView : UIView <CAAnimationDelegate, NSXMLParserDelegate> {
    UIColor * _color;
    unsigned long long  _currentLayer;
    bool  _estimateFailed;
    bool  _estimating;
    CAShapeLayer * _fingerLayer;
    NSCondition * _initCondition;
    bool  _inited;
    CABasicAnimation * _lastAnimation;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastFrameSize;
    double  _lastRatio;
    NSXMLParser * _parser;
    NSMutableArray * _pathLayers;
    NSMutableArray * _paths;
    unsigned long long  _preEstimateLayer;
    float  _progress;
    NSNumber * _speed;
    struct CGSize { 
        double width; 
        double height; 
    }  _sublayerSize;
    UIBezierPath * _wholePath;
    NSObject<OS_os_log> * bkui_curves_view_log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property float progress;
@property (retain) NSNumber *speed;
@property (nonatomic) struct CGSize { double x1; double x2; } sublayerSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEstimateWatchDog;
- (void)_animateEstimateFailure;
- (void)_animateFromLayer:(unsigned long long)arg1 toLayer:(unsigned long long)arg2 withColor:(id)arg3;
- (unsigned long long)_animateFromLayer:(unsigned long long)arg1 toProgress:(float)arg2 withColor:(id)arg3;
- (void)_checkEstimateFailedAfterAnimation:(id)arg1;
- (struct CGPoint { double x1; double x2; })_getPoint:(id)arg1;
- (void)_path:(id)arg1 drawCurveToPoint:(struct CGPoint { double x1; double x2; })arg2 controlPoint1:(struct CGPoint { double x1; double x2; })arg3 controlPoint2:(struct CGPoint { double x1; double x2; })arg4;
- (void)_path:(id)arg1 drawLineToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_removeEstimateWatchDog;
- (void)_resetEstimate:(id)arg1;
- (void)_resetLayers;
- (void)_startAnimation:(unsigned long long)arg1 withColor:(id)arg2 isLast:(bool)arg3;
- (void)_waitForInit;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (void)estimateFailed;
- (void)estimateProgress:(float)arg1;
- (void)loadDataFromXML:(id)arg1 name:(id)arg2 color:(id)arg3;
- (struct CGPath { }*)newQuartzPath:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (float)progress;
- (void)setProgress:(float)arg1;
- (void)setSpeed:(id)arg1;
- (void)setSublayerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSublayersSize:(struct CGSize { double x1; double x2; })arg1;
- (id)speed;
- (struct CGSize { double x1; double x2; })sublayerSize;

@end
