
@interface CKForceLayoutAnimator : NSObject {
    double  _alpha;
    double  _charge;
    double  _chargeDistance;
    CADisplayLink * _displayLink;
    NSMapTable * _fixedNodes;
    double  _friction;
    double  _gravity;
    CAShapeLayer * _linesLayer;
    double  _linkDistance;
    double  _linkStrength;
    NSMutableSet * _links;
    NSMutableSet * _nodes;
    NSMapTable * _previousCenters;
    UIView * _referenceView;
    double  _theta;
    NSMapTable * _weights;
}

@property (nonatomic) double alpha;
@property (nonatomic) double charge;
@property (nonatomic) double chargeDistance;
@property (nonatomic) double friction;
@property (nonatomic) double gravity;
@property (nonatomic, copy) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double linkDistance;
@property (nonatomic) double linkStrength;
@property (nonatomic, readonly) NSSet *links;
@property (nonatomic, readonly) NSSet *nodes;
@property (nonatomic, readonly) UIView *referenceView;
@property (nonatomic) double theta;

- (void).cxx_destruct;
- (void)addNode:(id)arg1;
- (double)alpha;
- (double)charge;
- (double)chargeDistance;
- (void)fixNode:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2;
- (double)friction;
- (double)gravity;
- (id)init;
- (id)initWithReferenceView:(id)arg1;
- (id)lineColor;
- (double)lineWidth;
- (double)linkDistance;
- (void)linkNode:(id)arg1 toNode:(id)arg2;
- (double)linkStrength;
- (id)links;
- (id)nodes;
- (id)referenceView;
- (void)releaseNode:(id)arg1;
- (void)removeAllNodes;
- (void)removeNode:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setCharge:(double)arg1;
- (void)setChargeDistance:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setGravity:(double)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLinkDistance:(double)arg1;
- (void)setLinkStrength:(double)arg1;
- (void)setTheta:(double)arg1;
- (void)start;
- (void)stop;
- (double)theta;
- (void)tick;
- (void)unlinkNode:(id)arg1 fromNode:(id)arg2;

@end
