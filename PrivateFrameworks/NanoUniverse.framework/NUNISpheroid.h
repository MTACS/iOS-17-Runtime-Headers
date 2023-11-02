
@interface NUNISpheroid : NSObject <NUNIAnimatable, NUNIRotatable> {
    NUNISpheroid * _parent;
    NUNIScene * _scene;
    struct NUNISpheroidStructure { 
        unsigned long long type; 
        float distance; 
        float distanceScale; 
        float angle; 
        float equatorRotation; 
        struct { 
            /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
            float opacity; 
            float cloudOpacity; 
            void*colorize; 
        } orientation; 
    }  _structure;
}

@property (nonatomic) float angle;
@property (nonatomic, readonly) float blend;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (nonatomic) float cloudOpacity;
@property (nonatomic) void colorize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float distance;
@property (nonatomic) float distanceScale;
@property (nonatomic) float equatorRotation;
@property (getter=isFacing, nonatomic) bool facing;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } homeCoordinate;
@property (nonatomic, readonly) void light;
@property (nonatomic) float opacity;
@property (nonatomic) struct { } orientation;
@property (nonatomic, readonly) NUNISpheroid *parent;
@property (nonatomic, readonly) void position;
@property (nonatomic, readonly) unsigned long long programType;
@property (nonatomic, readonly) float radius;
@property (nonatomic) float radiusScale;
@property (nonatomic, readonly) NUNIScene *scene;
@property (nonatomic) unsigned long long spriteType;
@property (nonatomic, readonly) const struct NUNISpheroidStructure { unsigned long long x1; float x2; float x3; float x4; float x5; struct { } x6; float x7; float x8; float x9; float x10; float x11; unsigned long long x12; unsigned long long x13; union { struct { float x_1_2_1; float x_1_2_2; } x_14_1_1; } x14; union { struct { float x_1_2_1; float x_1_2_2; } x_15_1_1; } x15; bool x16; bool x17; }*structure;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_updateCamera;
- (void)_updatePositionFromAngle;
- (float)angle;
- (void)animatedFloatForKey:(unsigned long long)arg1;
- (float)blend;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (float)cloudOpacity;
- (void)colorize;
- (void)date:(id)arg1 toCameraPosition:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 toCameraTarget:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3;
- (float)distance;
- (float)distanceScale;
- (float)equatorRotation;
- (struct CLLocationCoordinate2D { double x1; double x2; })homeCoordinate;
- (id)initWithScene:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3;
- (bool)isFacing;
- (bool)isVisible;
- (void)light;
- (float)opacity;
- (struct { })orientation;
- (id)parent;
- (void)position;
- (unsigned long long)programType;
- (float)radius;
- (float)radiusScale;
- (id)scene;
- (void)setAngle:(float)arg1;
- (void)setAnimatedFloat:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: unsigned long long
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setCloudOpacity:(float)arg1;
- (void)setColorize;
- (void)setDistance:(float)arg1;
- (void)setDistanceScale:(float)arg1;
- (void)setEquatorRotation:(float)arg1;
- (void)setFacing:(bool)arg1;
- (void)setHomeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setOrientation:(struct { })arg1;
- (void)setRadiusScale:(float)arg1;
- (void)setVisible:(bool)arg1;
- (unsigned long long)spriteType;
- (const struct NUNISpheroidStructure { unsigned long long x1; float x2; float x3; float x4; float x5; struct { } x6; float x7; float x8; float x9; float x10; float x11; unsigned long long x12; unsigned long long x13; union { struct { float x_1_2_1; float x_1_2_2; } x_14_1_1; } x14; union { struct { float x_1_2_1; float x_1_2_2; } x_15_1_1; } x15; bool x16; bool x17; }*)structure;
- (unsigned long long)type;
- (void)updateSunLocationForDate:(id)arg1 lightingPreference:(unsigned long long)arg2 adjustEarthRotation:(bool)arg3;

@end
