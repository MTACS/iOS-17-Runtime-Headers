
@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {
    long long  _activeModifiers;
    struct CGSize { 
        double width; 
        double height; 
    }  _digitizerSurfaceSize;
    double  _initialTouchTimestamp;
    float  _maximumForce;
    double  _maximumPositionZ;
    NSArray * _pathAttributes;
    long long  _sceneTouchBehavior;
    bool  _systemGestureStateChange;
    bool  _systemGesturesPossible;
    unsigned char  _touchStreamIdentifier;
}

@property (nonatomic) long long activeModifiers;
@property (nonatomic) double digitizerSurfaceHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } digitizerSurfaceSize;
@property (nonatomic) double digitizerSurfaceWidth;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) float maximumForce;
@property (nonatomic) double maximumPositionZ;
@property (nonatomic, retain) NSArray *pathAttributes;
@property (nonatomic) long long sceneTouchBehavior;
@property (nonatomic) bool systemGestureStateChange;
@property (nonatomic) bool systemGesturesPossible;
@property (nonatomic) unsigned char touchStreamIdentifier;

+ (id)protobufSchema;

- (void).cxx_destruct;
- (long long)activeModifiers;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)digitizerSurfaceHeight;
- (struct CGSize { double x1; double x2; })digitizerSurfaceSize;
- (double)digitizerSurfaceWidth;
- (double)initialTouchTimestamp;
- (bool)isEqual:(id)arg1;
- (float)maximumForce;
- (double)maximumPositionZ;
- (id)pathAttributes;
- (long long)sceneTouchBehavior;
- (void)setActiveModifiers:(long long)arg1;
- (void)setDigitizerSurfaceHeight:(double)arg1;
- (void)setDigitizerSurfaceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDigitizerSurfaceWidth:(double)arg1;
- (void)setInitialTouchTimestamp:(double)arg1;
- (void)setMaximumForce:(float)arg1;
- (void)setMaximumPositionZ:(double)arg1;
- (void)setPathAttributes:(id)arg1;
- (void)setSceneTouchBehavior:(long long)arg1;
- (void)setSystemGestureStateChange:(bool)arg1;
- (void)setSystemGesturesPossible:(bool)arg1;
- (void)setTouchStreamIdentifier:(unsigned char)arg1;
- (bool)systemGestureStateChange;
- (bool)systemGesturesPossible;
- (unsigned char)touchStreamIdentifier;

@end
