
@interface NUNIAstronomyRotationModel : NSObject {
    void _accumulatedPushVector;
    CADisplayLink * _displayLink;
    float  _effectivePullAcceleration;
    float  _effectivePushDeceleration;
    const struct NUNIAstronomyInteractionSettings { float x1; float x2; float x3; float x4; } * _interactionSettings;
    bool  _isPulling;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _landingCoordinate;
    <NUNIAstronomyRotationModelObserver> * _observer;
    double  _previousDisplayLinkCallbackTime;
    double  _pullStartTime;
    bool  _pulling;
    double  _pushStartTime;
    <NUNIRotatable> * _rotatable;
    long long  _state;
}

@property (nonatomic, readonly) const struct NUNIAstronomyInteractionSettings { float x1; float x2; float x3; float x4; }*interactionSettings;
@property (nonatomic) <NUNIAstronomyRotationModelObserver> *observer;
@property (getter=isPulling, nonatomic) bool pulling;
@property (nonatomic) <NUNIRotatable> *rotatable;

- (void).cxx_destruct;
- (void)_handleDisplayLink;
- (void)_update;
- (void)dealloc;
- (id)init;
- (const struct NUNIAstronomyInteractionSettings { float x1; float x2; float x3; float x4; }*)interactionSettings;
- (bool)isAtHomeCoordinate;
- (bool)isPulling;
- (id)observer;
- (void)push;
- (id)rotatable;
- (void)setObserver:(id)arg1;
- (void)setPulling:(bool)arg1;
- (void)setRotatable:(id)arg1;
- (void)stop;

@end
