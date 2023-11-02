
@interface ATXActionCriteriaWorldState : NSObject {
    bool  _fake;
    struct { 
        unsigned int doNotDisturb : 1; 
        unsigned int telephonyCapability : 1; 
        unsigned int airDropCapability : 1; 
        unsigned int airplaneMode : 1; 
        unsigned int coreRoutineCapability : 1; 
        unsigned int greenTeaDeviceCapability : 1; 
        unsigned int internalBuild : 1; 
        unsigned int lockScreen : 1; 
    }  _flags;
    struct { 
        unsigned int now : 1; 
        unsigned int doNotDisturb : 1; 
        unsigned int telephonyCapability : 1; 
        unsigned int airDropCapability : 1; 
        unsigned int airplaneMode : 1; 
        unsigned int coreRoutineCapability : 1; 
        unsigned int greenTeaDeviceCapability : 1; 
        unsigned int internalBuild : 1; 
        unsigned int lockScreen : 1; 
    }  _have;
    NSDate * _now;
}

@property (nonatomic) bool airDropCapability;
@property (nonatomic) bool airplaneMode;
@property (nonatomic) bool coreRoutineCapability;
@property (nonatomic) bool doNotDisturb;
@property (nonatomic) bool greenTeaDeviceCapability;
@property (nonatomic) bool internalBuild;
@property (nonatomic) bool lockScreen;
@property (nonatomic, copy) NSDate *now;
@property (nonatomic) bool telephonyCapability;

- (void).cxx_destruct;
- (bool)airDropCapability;
- (bool)airplaneMode;
- (bool)coreRoutineCapability;
- (bool)doNotDisturb;
- (bool)greenTeaDeviceCapability;
- (id)init;
- (id)initFake;
- (bool)internalBuild;
- (bool)lockScreen;
- (id)now;
- (id)propertyWhitelist;
- (void)setAirDropCapability:(bool)arg1;
- (void)setAirplaneMode:(bool)arg1;
- (void)setCoreRoutineCapability:(bool)arg1;
- (void)setDoNotDisturb:(bool)arg1;
- (void)setGreenTeaDeviceCapability:(bool)arg1;
- (void)setInternalBuild:(bool)arg1;
- (void)setLockScreen:(bool)arg1;
- (void)setNow:(id)arg1;
- (void)setTelephonyCapability:(bool)arg1;
- (bool)telephonyCapability;

@end
