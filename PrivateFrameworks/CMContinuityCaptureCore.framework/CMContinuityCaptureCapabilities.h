
@interface CMContinuityCaptureCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable> {
    struct { 
        long long major; 
        long long minor; 
        long long patch; 
    }  _capabilitiesVersion;
    NSArray * _devicesCapabilities;
    bool  _userDisabled;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } capabilitiesVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *devicesCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool userDisabled;

+ (id)capabilitiesForCurrentDevice;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; long long x3; })capabilitiesVersion;
- (id)debugDescription;
- (id)description;
- (id)devicesCapabilities;
- (id)dictionaryRepresentation;
- (id)initWithCapabilitiesVersion:(struct { long long x1; long long x2; long long x3; })arg1 devicesCapabilities:(id)arg2 userDisabled:(bool)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)userDisabled;

@end
