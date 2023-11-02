
@interface MXMetaData : NSObject <NSSecureCoding> {
    NSString * _applicationBuildVersion;
    NSString * _bundleID;
    NSString * _deviceType;
    bool  _errorRetrievingAppRecord;
    bool  _isTestFlightApp;
    NSObject<OS_os_log> * _logHandle;
    bool  _lowPowerModeEnabled;
    NSString * _osVersion;
    int  _pid;
    NSString * _platformArchitecture;
    NSString * _regionFormat;
}

@property (retain) NSString *applicationBuildVersion;
@property (retain) NSString *bundleID;
@property (retain) NSString *deviceType;
@property bool errorRetrievingAppRecord;
@property bool isTestFlightApp;
@property (retain) NSObject<OS_os_log> *logHandle;
@property bool lowPowerModeEnabled;
@property (retain) NSString *osVersion;
@property int pid;
@property (retain) NSString *platformArchitecture;
@property (retain) NSString *regionFormat;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DictionaryRepresentation;
- (id)JSONRepresentation;
- (id)applicationBuildVersion;
- (id)bundleID;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)errorRetrievingAppRecord;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 bundleID:(id)arg5;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 platformArchitecture:(id)arg5;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 platformArchitecture:(id)arg5 bundleID:(id)arg6;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 platformArchitecture:(id)arg5 bundleID:(id)arg6 pid:(int)arg7 isTestFlightApp:(bool)arg8;
- (bool)isTestFlightApp;
- (id)logHandle;
- (bool)lowPowerModeEnabled;
- (id)osVersion;
- (int)pid;
- (id)platformArchitecture;
- (id)regionFormat;
- (void)setApplicationBuildVersion:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setErrorRetrievingAppRecord:(bool)arg1;
- (void)setIsTestFlightApp:(bool)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPlatformArchitecture:(id)arg1;
- (void)setRegionFormat:(id)arg1;
- (id)toDictionary;

@end
