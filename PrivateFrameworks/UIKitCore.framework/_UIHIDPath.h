
@interface _UIHIDPath : NSObject {
    long long  _deliveryPhase;
    double  _density;
    double  _force;
    long long  _generationCount;
    unsigned int  _identity;
    double  _irregularity;
    double  _majorRadius;
    double  _minorRadius;
    NSNumber * _overridePathId;
    NSNumber * _pathId;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    double  _quality;
    bool  _touching;
    double  _twist;
}

@property (nonatomic) long long deliveryPhase;
@property (nonatomic, readonly) double density;
@property (nonatomic, readonly) double force;
@property (nonatomic, readonly) long long generationCount;
@property (nonatomic, readonly) unsigned int identity;
@property (nonatomic, readonly) double irregularity;
@property (nonatomic, readonly) double majorRadius;
@property (nonatomic, readonly) double minorRadius;
@property (nonatomic, retain) NSNumber *overridePathId;
@property (nonatomic, readonly) NSNumber *pathId;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) double quality;
@property (getter=isTouching, nonatomic, readonly) bool touching;
@property (nonatomic, readonly) double twist;

- (void).cxx_destruct;
- (void)applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (long long)deliveryPhase;
- (double)density;
- (double)force;
- (long long)generationCount;
- (unsigned int)identity;
- (id)init;
- (double)irregularity;
- (bool)isTouching;
- (double)majorRadius;
- (double)minorRadius;
- (id)overridePathId;
- (id)pathId;
- (struct CGPoint { double x1; double x2; })position;
- (double)quality;
- (void)setDeliveryPhase:(long long)arg1;
- (void)setOverridePathId:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (double)twist;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { }*)arg1;

@end
