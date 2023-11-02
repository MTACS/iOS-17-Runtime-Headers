
@interface MTLTargetDeviceArchitecture : NSObject {
    unsigned int  _cpuType;
    unsigned long long  _driverVersion;
    unsigned int  _subType;
    struct MTLTargetDeviceArchVersion { 
        unsigned short major; 
        unsigned char minor; 
        unsigned char update; 
    }  _version;
}

@property (nonatomic) unsigned int cpuType;
@property (nonatomic) unsigned long long driverVersion;
@property (nonatomic) unsigned int subType;
@property (nonatomic) struct MTLTargetDeviceArchVersion { unsigned short x1; unsigned char x2; unsigned char x3; } version;
@property (readonly) unsigned int versionCombined;

- (unsigned int)cpuType;
- (unsigned long long)driverVersion;
- (id)init;
- (void)setCpuType:(unsigned int)arg1;
- (void)setDriverVersion:(unsigned long long)arg1;
- (void)setSubType:(unsigned int)arg1;
- (void)setVersion:(struct MTLTargetDeviceArchVersion { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned int)subType;
- (struct MTLTargetDeviceArchVersion { unsigned short x1; unsigned char x2; unsigned char x3; })version;
- (unsigned int)versionCombined;

@end
