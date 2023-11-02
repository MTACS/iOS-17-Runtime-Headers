
@interface CSAudioStartStreamOption : NSObject <NSCopying> {
    bool  _allowRecordWhileBeep;
    bool  _disableBoostForDoAP;
    bool  _disableEndpointer;
    bool  _disableLocalSpeechRecognizer;
    bool  _disablePrewarmLocalAsrAtStartRecording;
    long long  _errorAlertBehavior;
    unsigned long long  _estimatedStartHostTime;
    bool  _requestHistoricalAudioDataSampleCount;
    bool  _requestHistoricalAudioDataWithHostTime;
    NSString * _requestMHUUID;
    bool  _requestTelephonyDownlinkAudioTap;
    bool  _requireSingleChannelLookup;
    unsigned int  _selectedChannel;
    NSString * _siriSessionUUID;
    bool  _skipAlertBehavior;
    long long  _startAlertBehavior;
    unsigned long long  _startRecordingHostTime;
    unsigned long long  _startRecordingSampleCount;
    long long  _stopAlertBehavior;
    bool  _useOpportunisticZLL;
}

@property (nonatomic) bool allowRecordWhileBeep;
@property (nonatomic) bool disableBoostForDoAP;
@property (nonatomic) bool disableEndpointer;
@property (nonatomic) bool disableLocalSpeechRecognizer;
@property (nonatomic) bool disablePrewarmLocalAsrAtStartRecording;
@property (nonatomic) long long errorAlertBehavior;
@property (nonatomic) unsigned long long estimatedStartHostTime;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic) bool requestHistoricalAudioDataSampleCount;
@property (nonatomic) bool requestHistoricalAudioDataWithHostTime;
@property (nonatomic, retain) NSString *requestMHUUID;
@property (nonatomic) bool requestTelephonyDownlinkAudioTap;
@property (nonatomic) bool requireSingleChannelLookup;
@property (nonatomic) unsigned int selectedChannel;
@property (nonatomic, retain) NSString *siriSessionUUID;
@property (nonatomic) bool skipAlertBehavior;
@property (nonatomic) long long startAlertBehavior;
@property (nonatomic) unsigned long long startRecordingHostTime;
@property (nonatomic) unsigned long long startRecordingSampleCount;
@property (nonatomic) long long stopAlertBehavior;
@property (nonatomic) bool useOpportunisticZLL;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation

+ (id)noAlertOption;

- (void).cxx_destruct;
- (bool)allowRecordWhileBeep;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableBoostForDoAP;
- (bool)disableEndpointer;
- (bool)disableLocalSpeechRecognizer;
- (bool)disablePrewarmLocalAsrAtStartRecording;
- (long long)errorAlertBehavior;
- (unsigned long long)estimatedStartHostTime;
- (id)initTandemWithOption:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)localizedDescription;
- (bool)requestHistoricalAudioDataSampleCount;
- (bool)requestHistoricalAudioDataWithHostTime;
- (id)requestMHUUID;
- (bool)requestTelephonyDownlinkAudioTap;
- (bool)requireSingleChannelLookup;
- (unsigned int)selectedChannel;
- (void)setAllowRecordWhileBeep:(bool)arg1;
- (void)setDisableBoostForDoAP:(bool)arg1;
- (void)setDisableEndpointer:(bool)arg1;
- (void)setDisableLocalSpeechRecognizer:(bool)arg1;
- (void)setDisablePrewarmLocalAsrAtStartRecording:(bool)arg1;
- (void)setErrorAlertBehavior:(long long)arg1;
- (void)setEstimatedStartHostTime:(unsigned long long)arg1;
- (void)setRequestHistoricalAudioDataSampleCount:(bool)arg1;
- (void)setRequestHistoricalAudioDataWithHostTime:(bool)arg1;
- (void)setRequestMHUUID:(id)arg1;
- (void)setRequestTelephonyDownlinkAudioTap:(bool)arg1;
- (void)setRequireSingleChannelLookup:(bool)arg1;
- (void)setSelectedChannel:(unsigned int)arg1;
- (void)setSiriSessionUUID:(id)arg1;
- (void)setSkipAlertBehavior:(bool)arg1;
- (void)setStartAlertBehavior:(long long)arg1;
- (void)setStartRecordingHostTime:(unsigned long long)arg1;
- (void)setStartRecordingSampleCount:(unsigned long long)arg1;
- (void)setStopAlertBehavior:(long long)arg1;
- (void)setUseOpportunisticZLL:(bool)arg1;
- (id)siriSessionUUID;
- (bool)skipAlertBehavior;
- (long long)startAlertBehavior;
- (unsigned long long)startRecordingHostTime;
- (unsigned long long)startRecordingSampleCount;
- (long long)stopAlertBehavior;
- (bool)useOpportunisticZLL;
- (id)xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

+ (long long)avvcAlertOverrideType:(long long)arg1;

- (long long)_alertBehaviorTypeFromAVVCOverrideType:(long long)arg1;
- (void)adjustStartRecordingHostTime:(unsigned long long)arg1;
- (id)avvcAlertBehavior;
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)arg1;
- (bool)isAlertBehaviorOverridedBeep;
- (void)setAVVCAlertBehavior:(id)arg1;

@end
