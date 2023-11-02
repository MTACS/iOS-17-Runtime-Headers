
@interface NUNIScene : NSObject <NUNIAnimatable> {
    NSMutableArray * _animations;
    id /* block */  _currentDateBlock;
    NSDate * _date;
    bool  _isUpdateNeeded;
    <NUNISceneObserver> * _observer;
    NSMutableArray * _spheroids;
    struct NUNISceneStructure { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*cameraPosition; 
    }  _structure;
}

@property (nonatomic) unsigned long long backgroundType;
@property (nonatomic) void cameraOffset;
@property (nonatomic) float cameraOrbit;
@property (nonatomic, readonly) void cameraPosition;
@property (nonatomic, readonly) float cameraRoll;
@property (nonatomic, readonly) void cameraTarget;
@property (nonatomic, readonly) void cameraUp;
@property (nonatomic) unsigned long long collectionType;
@property (nonatomic, copy) id /* block */ currentDateBlock;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float locationDotAlpha;
@property (nonatomic) float locationDotMaximumRadius;
@property (nonatomic) float locationDotPulse;
@property (nonatomic) float locationDotPulseOverrideAlpha;
@property (nonatomic) <NUNISceneObserver> *observer;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } offsetCoordinate;
@property (nonatomic, readonly) unsigned long long projectionType;
@property (nonatomic) unsigned long long snap;
@property (nonatomic, readonly, copy) NSArray *spheroids;
@property (nonatomic, readonly) const struct NUNISceneStructure { float x1; float x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; float x8; union { struct { float x_1_2_1; float x_1_2_2; } x_9_1_1; } x9; float x10; float x11; float x12; float x13; }*structure;
@property (readonly) Class superclass;
@property (getter=isUpdatable, nonatomic) bool updatable;
@property (nonatomic, readonly) float yearsSince1970;

- (void).cxx_destruct;
- (void)addAnimation:(id)arg1;
- (void)animatedFloatForKey:(unsigned long long)arg1;
- (unsigned long long)backgroundType;
- (void)cameraOffset;
- (float)cameraOrbit;
- (void)cameraPosition;
- (float)cameraRoll;
- (void)cameraTarget;
- (void)cameraUp;
- (unsigned long long)collectionType;
- (id /* block */)currentDateBlock;
- (id)date;
- (id)initWithSphereoids:(unsigned long long)arg1 currentDateBlock:(id /* block */)arg2;
- (id)initWithSphereoids:(unsigned long long)arg1 projectionType:(unsigned long long)arg2 currentDateBlock:(id /* block */)arg3;
- (bool)isAnimating:(id)arg1 forKeys:(unsigned long long)arg2;
- (bool)isUpdatable;
- (float)locationDotAlpha;
- (float)locationDotMaximumRadius;
- (float)locationDotPulse;
- (float)locationDotPulseOverrideAlpha;
- (id)observer;
- (struct CLLocationCoordinate2D { double x1; double x2; })offsetCoordinate;
- (id)packIntoBlob;
- (unsigned long long)projectionType;
- (void)removeAllAnimations;
- (void)removeAllAnimationsFor:(id)arg1 withKeys:(unsigned long long)arg2;
- (void)removeAnimation:(id)arg1;
- (float)restingCameraRoll;
- (void)setAnimatedFloat:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: unsigned long long
- (void)setBackgroundType:(unsigned long long)arg1;
- (void)setCamera:(void *)arg1 target:(void *)arg2 up:(void *)arg3 roll:(void *)arg4; // needs 4 arg types, found 1: float
- (void)setCameraOffset;
- (void)setCameraOrbit:(float)arg1;
- (void)setCollectionType:(unsigned long long)arg1;
- (void)setCurrentDateBlock:(id /* block */)arg1;
- (void)setLocationDotAlpha:(float)arg1;
- (void)setLocationDotMaximumRadius:(float)arg1;
- (void)setLocationDotPulse:(float)arg1;
- (void)setLocationDotPulseOverrideAlpha:(float)arg1;
- (void)setObserver:(id)arg1;
- (void)setOffsetCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setSnap:(unsigned long long)arg1;
- (void)setUpdatable:(bool)arg1;
- (unsigned long long)snap;
- (id)spheroidOfType:(unsigned long long)arg1;
- (id)spheroids;
- (const struct NUNISceneStructure { float x1; float x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; float x8; union { struct { float x_1_2_1; float x_1_2_2; } x_9_1_1; } x9; float x10; float x11; float x12; float x13; }*)structure;
- (void)unpackFromBlob:(id)arg1;
- (void)update:(float)arg1;
- (void)updateCamera;
- (void)updateFromDateIfNeeded;
- (void)updateSunLocationAnimated:(bool)arg1 lightingPreference:(unsigned long long)arg2 adjustEarthRotation:(bool)arg3;
- (void)updateSunLocationForDate:(id)arg1 animated:(bool)arg2 lightingPreference:(unsigned long long)arg3 adjustEarthRotation:(bool)arg4;
- (float)yearsSince1970;

@end
