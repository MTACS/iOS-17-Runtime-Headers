
@interface ARVisualLocalizationResultData : NSObject <ARDaemonSecureCoding, ARResultData> {
    long long  _algorithmVersion;
    VLLocalizationDebugInfo * _debugInfo;
    long long  _errorCode;
    double  _heading;
    ARLocationData * _inputLocation;
    VLLocalizationResult * _localizationResult;
    CLLocation * _location;
    double  _undulation;
}

@property (nonatomic, readonly) long long algorithmVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) VLLocalizationDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) VLLocalizationResult *localizationResult;
@property (nonatomic, retain) CLLocation *location;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double undulation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)algorithmVersion;
- (id)debugInfo;
- (void)encodeWithCoder:(id)arg1;
- (long long)errorCode;
- (double)heading;
- (id)initWithCoder:(id)arg1;
- (id)initWithVLLocalizationResult:(id)arg1 errorCode:(long long)arg2 debugInfo:(id)arg3 heading:(double)arg4 inputLocation:(id)arg5 algorithmVersion:(long long)arg6 undulation:(double)arg7;
- (bool)isSecure;
- (id)localizationResult;
- (id)location;
- (void)setErrorCode:(long long)arg1;
- (void)setLocation:(id)arg1;
- (double)timestamp;
- (double)undulation;

@end
