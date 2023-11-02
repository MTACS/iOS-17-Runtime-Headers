
@interface IRSystemStateDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appInFocusBundleID;
    bool  _appInFocusWindowScreenUnlockEvent;
    bool  _appInFocusWindowValid;
    NSString * _avInitialRouteSharingPolicy;
    NSString * _deviceWiFiSSID;
    NSString * _iCloudId;
    NSString * _locationSemanticLoiIdentifier;
    int  _locationSemanticUserSpecificPlaceType;
    NSString * _mediaRouteGroupLeaderOutputDeviceID;
    NSString * _outputDeviceName;
    unsigned long long  _outputDeviceSubType;
    unsigned long long  _outputDeviceType;
    NSString * _predictedOutputDeviceName;
    unsigned long long  _predictedOutputDeviceSubType;
    unsigned long long  _predictedOutputDeviceType;
    long long  _timeZoneSeconds;
}

@property (nonatomic, readonly) NSString *appInFocusBundleID;
@property (nonatomic, readonly) bool appInFocusWindowScreenUnlockEvent;
@property (nonatomic, readonly) bool appInFocusWindowValid;
@property (nonatomic, readonly) NSString *avInitialRouteSharingPolicy;
@property (nonatomic, readonly) NSString *deviceWiFiSSID;
@property (nonatomic, readonly) NSString *iCloudId;
@property (nonatomic, readonly) NSString *locationSemanticLoiIdentifier;
@property (nonatomic, readonly) int locationSemanticUserSpecificPlaceType;
@property (nonatomic, readonly) NSString *mediaRouteGroupLeaderOutputDeviceID;
@property (nonatomic, readonly) NSString *outputDeviceName;
@property (nonatomic, readonly) unsigned long long outputDeviceSubType;
@property (nonatomic, readonly) unsigned long long outputDeviceType;
@property (nonatomic, readonly) NSString *predictedOutputDeviceName;
@property (nonatomic, readonly) unsigned long long predictedOutputDeviceSubType;
@property (nonatomic, readonly) unsigned long long predictedOutputDeviceType;
@property (nonatomic, readonly) long long timeZoneSeconds;

+ (bool)supportsSecureCoding;
+ (id)systemStateDOWithAppInFocusBundleID:(id)arg1 appInFocusWindowValid:(bool)arg2 deviceWiFiSSID:(id)arg3 locationSemanticUserSpecificPlaceType:(int)arg4 locationSemanticLoiIdentifier:(id)arg5 iCloudId:(id)arg6 avInitialRouteSharingPolicy:(id)arg7 mediaRouteGroupLeaderOutputDeviceID:(id)arg8 timeZoneSeconds:(long long)arg9 outputDeviceName:(id)arg10 outputDeviceType:(unsigned long long)arg11 outputDeviceSubType:(unsigned long long)arg12 predictedOutputDeviceName:(id)arg13 predictedOutputDeviceType:(unsigned long long)arg14 predictedOutputDeviceSubType:(unsigned long long)arg15 appInFocusWindowScreenUnlockEvent:(bool)arg16;

- (void).cxx_destruct;
- (id)appInFocusBundleID;
- (bool)appInFocusWindowScreenUnlockEvent;
- (bool)appInFocusWindowValid;
- (id)avInitialRouteSharingPolicy;
- (id)copyWithReplacementAppInFocusBundleID:(id)arg1;
- (id)copyWithReplacementAppInFocusWindowScreenUnlockEvent:(bool)arg1;
- (id)copyWithReplacementAppInFocusWindowValid:(bool)arg1;
- (id)copyWithReplacementAvInitialRouteSharingPolicy:(id)arg1;
- (id)copyWithReplacementDeviceWiFiSSID:(id)arg1;
- (id)copyWithReplacementICloudId:(id)arg1;
- (id)copyWithReplacementLocationSemanticLoiIdentifier:(id)arg1;
- (id)copyWithReplacementLocationSemanticUserSpecificPlaceType:(int)arg1;
- (id)copyWithReplacementMediaRouteGroupLeaderOutputDeviceID:(id)arg1;
- (id)copyWithReplacementOutputDeviceName:(id)arg1;
- (id)copyWithReplacementOutputDeviceSubType:(unsigned long long)arg1;
- (id)copyWithReplacementOutputDeviceType:(unsigned long long)arg1;
- (id)copyWithReplacementPredictedOutputDeviceName:(id)arg1;
- (id)copyWithReplacementPredictedOutputDeviceSubType:(unsigned long long)arg1;
- (id)copyWithReplacementPredictedOutputDeviceType:(unsigned long long)arg1;
- (id)copyWithReplacementTimeZoneSeconds:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceWiFiSSID;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)iCloudId;
- (id)init;
- (id)initWithAppInFocusBundleID:(id)arg1 appInFocusWindowValid:(bool)arg2 deviceWiFiSSID:(id)arg3 locationSemanticUserSpecificPlaceType:(int)arg4 locationSemanticLoiIdentifier:(id)arg5 iCloudId:(id)arg6 avInitialRouteSharingPolicy:(id)arg7 mediaRouteGroupLeaderOutputDeviceID:(id)arg8 timeZoneSeconds:(long long)arg9 outputDeviceName:(id)arg10 outputDeviceType:(unsigned long long)arg11 outputDeviceSubType:(unsigned long long)arg12 predictedOutputDeviceName:(id)arg13 predictedOutputDeviceType:(unsigned long long)arg14 predictedOutputDeviceSubType:(unsigned long long)arg15 appInFocusWindowScreenUnlockEvent:(bool)arg16;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSystemStateDO:(id)arg1;
- (bool)isHeadphonesRoutedOrPredicted;
- (bool)isInsideAppInFocusWindow;
- (id)locationSemanticLoiIdentifier;
- (int)locationSemanticUserSpecificPlaceType;
- (id)mediaRouteGroupLeaderOutputDeviceID;
- (id)outputDeviceName;
- (unsigned long long)outputDeviceSubType;
- (unsigned long long)outputDeviceType;
- (id)predictedOutputDeviceName;
- (unsigned long long)predictedOutputDeviceSubType;
- (unsigned long long)predictedOutputDeviceType;
- (long long)timeZoneSeconds;

@end
