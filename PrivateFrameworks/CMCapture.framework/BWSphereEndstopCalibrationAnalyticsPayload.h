
@interface BWSphereEndstopCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _calibrationStatus;
    int  _deltaSphereXNegEndstop;
    int  _deltaSphereXPosEndstop;
    int  _deltaSphereYNegEndstop;
    int  _deltaSphereYPosEndstop;
    long long  _magneticFieldMagnitude;
    NSString * _portType;
    int  _sphereXNegEndstop;
    int  _sphereXPosEndstop;
    int  _sphereXStroke;
    int  _sphereYNegEndstop;
    int  _sphereYPosEndstop;
    int  _sphereYStroke;
}

@property (nonatomic) unsigned int calibrationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deltaSphereXNegEndstop;
@property (nonatomic) int deltaSphereXPosEndstop;
@property (nonatomic) int deltaSphereYNegEndstop;
@property (nonatomic) int deltaSphereYPosEndstop;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long magneticFieldMagnitude;
@property (nonatomic, retain) NSString *portType;
@property (nonatomic) int sphereXNegEndstop;
@property (nonatomic) int sphereXPosEndstop;
@property (nonatomic) int sphereXStroke;
@property (nonatomic) int sphereYNegEndstop;
@property (nonatomic) int sphereYPosEndstop;
@property (nonatomic) int sphereYStroke;
@property (readonly) Class superclass;

- (unsigned int)calibrationStatus;
- (void)dealloc;
- (int)deltaSphereXNegEndstop;
- (int)deltaSphereXPosEndstop;
- (int)deltaSphereYNegEndstop;
- (int)deltaSphereYPosEndstop;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (long long)magneticFieldMagnitude;
- (id)portType;
- (void)reset;
- (void)setCalibrationStatus:(unsigned int)arg1;
- (void)setDeltaSphereXNegEndstop:(int)arg1;
- (void)setDeltaSphereXPosEndstop:(int)arg1;
- (void)setDeltaSphereYNegEndstop:(int)arg1;
- (void)setDeltaSphereYPosEndstop:(int)arg1;
- (void)setMagneticFieldMagnitude:(long long)arg1;
- (void)setPortType:(id)arg1;
- (void)setSphereXNegEndstop:(int)arg1;
- (void)setSphereXPosEndstop:(int)arg1;
- (void)setSphereXStroke:(int)arg1;
- (void)setSphereYNegEndstop:(int)arg1;
- (void)setSphereYPosEndstop:(int)arg1;
- (void)setSphereYStroke:(int)arg1;
- (int)sphereXNegEndstop;
- (int)sphereXPosEndstop;
- (int)sphereXStroke;
- (int)sphereYNegEndstop;
- (int)sphereYPosEndstop;
- (int)sphereYStroke;

@end
