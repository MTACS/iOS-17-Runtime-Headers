
@interface ATXPredictionContext : NSObject <ATXProactiveSuggestionFeedbackContextProtocol, ATXProtoBufWrapper, BMStoreData, NSCopying, NSSecureCoding> {
    ATXPredictionAmbientLightContext * _ambientLightContext;
    ATXBluetoothDuetEvent * _bluetoothEvent;
    NSDictionary * _candidateIdentifiersLaunchAge;
    ATXPredictionDeviceStateContext * _deviceStateContext;
    BMInferredModeEvent * _inferredModeEvent;
    bool  _isOverridden;
    ATXPredictionLocationMotionContext * _locationMotionContext;
    ATXMicrolocationVisitDuetEvent * _microlocationVisitEvent;
    NSString * _poiCategory;
    ATXPredictionTimeContext * _timeContext;
    ATXPredictionUserContext * _userContext;
    BMUserFocusComputedModeEvent * _userFocusComputedModeEvent;
}

@property (nonatomic, retain) ATXPredictionAmbientLightContext *ambientLightContext;
@property (nonatomic, retain) ATXBluetoothDuetEvent *bluetoothEvent;
@property (nonatomic, retain) NSDictionary *candidateIdentifiersLaunchAge;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ATXPredictionDeviceStateContext *deviceStateContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BMInferredModeEvent *inferredModeEvent;
@property (nonatomic) bool isOverridden;
@property (nonatomic, retain) ATXPredictionLocationMotionContext *locationMotionContext;
@property (nonatomic, retain) ATXMicrolocationVisitDuetEvent *microlocationVisitEvent;
@property (nonatomic, retain) NSString *poiCategory;
@property (readonly) Class superclass;
@property (nonatomic, retain) ATXPredictionTimeContext *timeContext;
@property (nonatomic, retain) ATXPredictionUserContext *userContext;
@property (nonatomic, retain) BMUserFocusComputedModeEvent *userFocusComputedModeEvent;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ambientLightContext;
- (id)bluetoothEvent;
- (id)candidateIdentifiersLaunchAge;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceStateContext;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)inferredModeEvent;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceStateContext:(id)arg1 timeContext:(id)arg2 locationMotionContext:(id)arg3 ambientLightContext:(id)arg4 userContext:(id)arg5;
- (id)initWithDeviceStateContext:(id)arg1 timeContext:(id)arg2 locationMotionContext:(id)arg3 ambientLightContext:(id)arg4 userContext:(id)arg5 isOverridden:(bool)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionContext:(id)arg1;
- (bool)isOverridden;
- (id)json;
- (id)jsonDict;
- (id)locationMotionContext;
- (id)microlocationVisitEvent;
- (id)poiCategory;
- (id)proto;
- (id)serialize;
- (void)setAmbientLightContext:(id)arg1;
- (void)setBluetoothEvent:(id)arg1;
- (void)setCandidateIdentifiersLaunchAge:(id)arg1;
- (void)setDeviceStateContext:(id)arg1;
- (void)setInferredModeEvent:(id)arg1;
- (void)setIsOverridden:(bool)arg1;
- (void)setLocationMotionContext:(id)arg1;
- (void)setMicrolocationVisitEvent:(id)arg1;
- (void)setPoiCategory:(id)arg1;
- (void)setTimeContext:(id)arg1;
- (void)setUserContext:(id)arg1;
- (void)setUserFocusComputedModeEvent:(id)arg1;
- (id)timeContext;
- (void)updateTimeContextWithDate:(id)arg1;
- (void)updateWithInjectedContext:(id)arg1;
- (id)userContext;
- (id)userFocusComputedModeEvent;

@end
