
@interface RCConfigurationSettings : NSObject <RCSerializable> {
    RCBackgroundFetchConfiguration * _backgroundFetchConfiguration;
    NSString * _bundleID;
    RCDebugOverrides * _debugOverrides;
    RCDeviceInfo * _deviceInfo;
    double  _endpointTimeoutDuration;
    double  _fallbackTimeoutDuration;
    NSArray * _requestInfos;
    unsigned long long  _requestMode;
    NSString * _storefrontID;
    bool  _useBackgroundRefreshRate;
    NSString * _userID;
}

@property (nonatomic, readonly) RCBackgroundFetchConfiguration *backgroundFetchConfiguration;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) RCDebugOverrides *debugOverrides;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RCDeviceInfo *deviceInfo;
@property (nonatomic, readonly) double endpointTimeoutDuration;
@property (nonatomic, readonly) double fallbackTimeoutDuration;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *loggingKey;
@property (nonatomic, readonly) NSArray *requestInfos;
@property (nonatomic, readonly) unsigned long long requestMode;
@property (nonatomic, readonly, copy) NSString *storefrontID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useBackgroundRefreshRate;
@property (nonatomic, readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)backgroundFetchConfiguration;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugOverrides;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (double)endpointTimeoutDuration;
- (double)fallbackTimeoutDuration;
- (id)fallbackURL;
- (unsigned long long)hash;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(bool)arg7;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(bool)arg7 backgroundFetchConfiguration:(id)arg8 requestMode:(unsigned long long)arg9 endpointTimeoutDuration:(double)arg10 fallbackTimeoutDuration:(double)arg11;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(bool)arg7 requestMode:(unsigned long long)arg8;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(bool)arg7 requestMode:(unsigned long long)arg8 endpointTimeoutDuration:(double)arg9;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(bool)arg7 requestMode:(unsigned long long)arg8 endpointTimeoutDuration:(double)arg9 fallbackTimeoutDuration:(double)arg10;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 requestMode:(unsigned long long)arg9;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 useBackgroundRefreshRate:(bool)arg9;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 useBackgroundRefreshRate:(bool)arg9 backgroundFetchConfiguration:(id)arg10 requestMode:(unsigned long long)arg11 endpointTimeoutDuration:(double)arg12 fallbackTimeoutDuration:(double)arg13;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 useBackgroundRefreshRate:(bool)arg9 requestMode:(unsigned long long)arg10 endpointTimeoutDuration:(double)arg11;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 userID:(id)arg3 storefrontID:(id)arg4 bundleID:(id)arg5 deviceInfo:(id)arg6 debugOverrides:(id)arg7 backgroundFetchConfiguration:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)loggingKey;
- (id)requestInfos;
- (unsigned long long)requestMode;
- (id)storefrontID;
- (bool)useBackgroundRefreshRate;
- (id)userID;

@end
