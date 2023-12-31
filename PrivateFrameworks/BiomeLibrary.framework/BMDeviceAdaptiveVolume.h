
@interface BMDeviceAdaptiveVolume : BMEventBase <BMStoreData> {
    NSString * _activeAirpodsSerialNumber;
    NSString * _activeAppName;
    unsigned int  _bigWindowSize;
    unsigned int  _controllerVersion;
    unsigned int  _currentVolumePrct;
    int  _desiredDeltaE;
    unsigned int  _downlinkdBA;
    unsigned int  _drumdBA;
    unsigned int  _drumdBAPredicted;
    unsigned int  _drumdBK;
    unsigned int  _guardrailsAvoidFlag;
    bool  _hasBigWindowSize;
    bool  _hasControllerVersion;
    bool  _hasCurrentVolumePrct;
    bool  _hasDesiredDeltaE;
    bool  _hasDownlinkdBA;
    bool  _hasDrumdBA;
    bool  _hasDrumdBAPredicted;
    bool  _hasDrumdBK;
    bool  _hasGuardrailsAvoidFlag;
    bool  _hasHeadphoneMode;
    bool  _hasLastEMediadBA;
    bool  _hasLastESiridBA;
    bool  _hasLastETelephonydBA;
    bool  _hasLastUserVolChangeType;
    bool  _hasLastVolMediaPrct;
    bool  _hasLastVolSiriPrct;
    bool  _hasLastVolTelephonyPrct;
    bool  _hasManualVolumeChangeFlag;
    bool  _hasMinMaxCutFlag;
    bool  _hasOnStartPredictionFlag;
    bool  _hasPersonalizationParamMistakes;
    bool  _hasPersonalizationParamSnr;
    bool  _hasPredVolMediaPrct;
    bool  _hasPredVolSiriPrct;
    bool  _hasPredVolTelephonyPrct;
    bool  _hasRefMicdBA;
    bool  _hasRefMicdBC;
    bool  _hasSmallWindowSize;
    bool  _hasSmoothEae;
    bool  _hasSpeechPresenceProbability;
    bool  _hasStreamType;
    bool  _hasVolumeChangeFlag;
    bool  _hasWindSpeechAggressorFlag;
    unsigned int  _headphoneMode;
    unsigned int  _lastEMediadBA;
    unsigned int  _lastESiridBA;
    unsigned int  _lastETelephonydBA;
    unsigned int  _lastUserVolChangeType;
    unsigned int  _lastVolMediaPrct;
    unsigned int  _lastVolSiriPrct;
    unsigned int  _lastVolTelephonyPrct;
    unsigned int  _manualVolumeChangeFlag;
    unsigned int  _minMaxCutFlag;
    unsigned int  _onStartPredictionFlag;
    int  _personalizationParamMistakes;
    int  _personalizationParamSnr;
    int  _predVolMediaPrct;
    int  _predVolSiriPrct;
    int  _predVolTelephonyPrct;
    unsigned int  _refMicdBA;
    unsigned int  _refMicdBC;
    unsigned int  _smallWindowSize;
    unsigned int  _smoothEae;
    unsigned int  _speechPresenceProbability;
    unsigned int  _streamType;
    unsigned int  _volumeChangeFlag;
    unsigned int  _windSpeechAggressorFlag;
}

@property (nonatomic, readonly) NSString *activeAirpodsSerialNumber;
@property (nonatomic, readonly) NSString *activeAppName;
@property (nonatomic, readonly) unsigned int bigWindowSize;
@property (nonatomic, readonly) unsigned int controllerVersion;
@property (nonatomic, readonly) unsigned int currentVolumePrct;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int desiredDeltaE;
@property (nonatomic, readonly) unsigned int downlinkdBA;
@property (nonatomic, readonly) unsigned int drumdBA;
@property (nonatomic, readonly) unsigned int drumdBAPredicted;
@property (nonatomic, readonly) unsigned int drumdBK;
@property (nonatomic, readonly) unsigned int guardrailsAvoidFlag;
@property (nonatomic) bool hasBigWindowSize;
@property (nonatomic) bool hasControllerVersion;
@property (nonatomic) bool hasCurrentVolumePrct;
@property (nonatomic) bool hasDesiredDeltaE;
@property (nonatomic) bool hasDownlinkdBA;
@property (nonatomic) bool hasDrumdBA;
@property (nonatomic) bool hasDrumdBAPredicted;
@property (nonatomic) bool hasDrumdBK;
@property (nonatomic) bool hasGuardrailsAvoidFlag;
@property (nonatomic) bool hasHeadphoneMode;
@property (nonatomic) bool hasLastEMediadBA;
@property (nonatomic) bool hasLastESiridBA;
@property (nonatomic) bool hasLastETelephonydBA;
@property (nonatomic) bool hasLastUserVolChangeType;
@property (nonatomic) bool hasLastVolMediaPrct;
@property (nonatomic) bool hasLastVolSiriPrct;
@property (nonatomic) bool hasLastVolTelephonyPrct;
@property (nonatomic) bool hasManualVolumeChangeFlag;
@property (nonatomic) bool hasMinMaxCutFlag;
@property (nonatomic) bool hasOnStartPredictionFlag;
@property (nonatomic) bool hasPersonalizationParamMistakes;
@property (nonatomic) bool hasPersonalizationParamSnr;
@property (nonatomic) bool hasPredVolMediaPrct;
@property (nonatomic) bool hasPredVolSiriPrct;
@property (nonatomic) bool hasPredVolTelephonyPrct;
@property (nonatomic) bool hasRefMicdBA;
@property (nonatomic) bool hasRefMicdBC;
@property (nonatomic) bool hasSmallWindowSize;
@property (nonatomic) bool hasSmoothEae;
@property (nonatomic) bool hasSpeechPresenceProbability;
@property (nonatomic) bool hasStreamType;
@property (nonatomic) bool hasVolumeChangeFlag;
@property (nonatomic) bool hasWindSpeechAggressorFlag;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int headphoneMode;
@property (nonatomic, readonly) unsigned int lastEMediadBA;
@property (nonatomic, readonly) unsigned int lastESiridBA;
@property (nonatomic, readonly) unsigned int lastETelephonydBA;
@property (nonatomic, readonly) unsigned int lastUserVolChangeType;
@property (nonatomic, readonly) unsigned int lastVolMediaPrct;
@property (nonatomic, readonly) unsigned int lastVolSiriPrct;
@property (nonatomic, readonly) unsigned int lastVolTelephonyPrct;
@property (nonatomic, readonly) unsigned int manualVolumeChangeFlag;
@property (nonatomic, readonly) unsigned int minMaxCutFlag;
@property (nonatomic, readonly) unsigned int onStartPredictionFlag;
@property (nonatomic, readonly) int personalizationParamMistakes;
@property (nonatomic, readonly) int personalizationParamSnr;
@property (nonatomic, readonly) int predVolMediaPrct;
@property (nonatomic, readonly) int predVolSiriPrct;
@property (nonatomic, readonly) int predVolTelephonyPrct;
@property (nonatomic, readonly) unsigned int refMicdBA;
@property (nonatomic, readonly) unsigned int refMicdBC;
@property (nonatomic, readonly) unsigned int smallWindowSize;
@property (nonatomic, readonly) unsigned int smoothEae;
@property (nonatomic, readonly) unsigned int speechPresenceProbability;
@property (nonatomic, readonly) unsigned int streamType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int volumeChangeFlag;
@property (nonatomic, readonly) unsigned int windSpeechAggressorFlag;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)activeAirpodsSerialNumber;
- (id)activeAppName;
- (unsigned int)bigWindowSize;
- (unsigned int)controllerVersion;
- (unsigned int)currentVolumePrct;
- (unsigned int)dataVersion;
- (id)description;
- (int)desiredDeltaE;
- (unsigned int)downlinkdBA;
- (unsigned int)drumdBA;
- (unsigned int)drumdBAPredicted;
- (unsigned int)drumdBK;
- (unsigned int)guardrailsAvoidFlag;
- (bool)hasBigWindowSize;
- (bool)hasControllerVersion;
- (bool)hasCurrentVolumePrct;
- (bool)hasDesiredDeltaE;
- (bool)hasDownlinkdBA;
- (bool)hasDrumdBA;
- (bool)hasDrumdBAPredicted;
- (bool)hasDrumdBK;
- (bool)hasGuardrailsAvoidFlag;
- (bool)hasHeadphoneMode;
- (bool)hasLastEMediadBA;
- (bool)hasLastESiridBA;
- (bool)hasLastETelephonydBA;
- (bool)hasLastUserVolChangeType;
- (bool)hasLastVolMediaPrct;
- (bool)hasLastVolSiriPrct;
- (bool)hasLastVolTelephonyPrct;
- (bool)hasManualVolumeChangeFlag;
- (bool)hasMinMaxCutFlag;
- (bool)hasOnStartPredictionFlag;
- (bool)hasPersonalizationParamMistakes;
- (bool)hasPersonalizationParamSnr;
- (bool)hasPredVolMediaPrct;
- (bool)hasPredVolSiriPrct;
- (bool)hasPredVolTelephonyPrct;
- (bool)hasRefMicdBA;
- (bool)hasRefMicdBC;
- (bool)hasSmallWindowSize;
- (bool)hasSmoothEae;
- (bool)hasSpeechPresenceProbability;
- (bool)hasStreamType;
- (bool)hasVolumeChangeFlag;
- (bool)hasWindSpeechAggressorFlag;
- (unsigned int)headphoneMode;
- (id)initByReadFrom:(id)arg1;
- (id)initWithControllerVersion:(id)arg1 refMicdBA:(id)arg2 refMicdBC:(id)arg3 drumdBA:(id)arg4 drumdBK:(id)arg5 drumdBAPredicted:(id)arg6 downlinkdBA:(id)arg7 currentVolumePrct:(id)arg8 lastUserVolChangeType:(id)arg9 headphoneMode:(id)arg10 streamType:(id)arg11 windSpeechAggressorFlag:(id)arg12 volumeChangeFlag:(id)arg13 speechPresenceProbability:(id)arg14 personalizationParamSnr:(id)arg15 personalizationParamMistakes:(id)arg16 lastEMediadBA:(id)arg17 lastVolMediaPrct:(id)arg18 lastETelephonydBA:(id)arg19 lastVolTelephonyPrct:(id)arg20 lastESiridBA:(id)arg21 lastVolSiriPrct:(id)arg22 smoothEae:(id)arg23 desiredDeltaE:(id)arg24 predVolMediaPrct:(id)arg25 predVolTelephonyPrct:(id)arg26 predVolSiriPrct:(id)arg27 onStartPredictionFlag:(id)arg28 guardrailsAvoidFlag:(id)arg29 minMaxCutFlag:(id)arg30 manualVolumeChangeFlag:(id)arg31 bigWindowSize:(id)arg32 smallWindowSize:(id)arg33 activeAppName:(id)arg34 activeAirpodsSerialNumber:(id)arg35;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)lastEMediadBA;
- (unsigned int)lastESiridBA;
- (unsigned int)lastETelephonydBA;
- (unsigned int)lastUserVolChangeType;
- (unsigned int)lastVolMediaPrct;
- (unsigned int)lastVolSiriPrct;
- (unsigned int)lastVolTelephonyPrct;
- (unsigned int)manualVolumeChangeFlag;
- (unsigned int)minMaxCutFlag;
- (unsigned int)onStartPredictionFlag;
- (int)personalizationParamMistakes;
- (int)personalizationParamSnr;
- (int)predVolMediaPrct;
- (int)predVolSiriPrct;
- (int)predVolTelephonyPrct;
- (unsigned int)refMicdBA;
- (unsigned int)refMicdBC;
- (id)serialize;
- (void)setHasBigWindowSize:(bool)arg1;
- (void)setHasControllerVersion:(bool)arg1;
- (void)setHasCurrentVolumePrct:(bool)arg1;
- (void)setHasDesiredDeltaE:(bool)arg1;
- (void)setHasDownlinkdBA:(bool)arg1;
- (void)setHasDrumdBA:(bool)arg1;
- (void)setHasDrumdBAPredicted:(bool)arg1;
- (void)setHasDrumdBK:(bool)arg1;
- (void)setHasGuardrailsAvoidFlag:(bool)arg1;
- (void)setHasHeadphoneMode:(bool)arg1;
- (void)setHasLastEMediadBA:(bool)arg1;
- (void)setHasLastESiridBA:(bool)arg1;
- (void)setHasLastETelephonydBA:(bool)arg1;
- (void)setHasLastUserVolChangeType:(bool)arg1;
- (void)setHasLastVolMediaPrct:(bool)arg1;
- (void)setHasLastVolSiriPrct:(bool)arg1;
- (void)setHasLastVolTelephonyPrct:(bool)arg1;
- (void)setHasManualVolumeChangeFlag:(bool)arg1;
- (void)setHasMinMaxCutFlag:(bool)arg1;
- (void)setHasOnStartPredictionFlag:(bool)arg1;
- (void)setHasPersonalizationParamMistakes:(bool)arg1;
- (void)setHasPersonalizationParamSnr:(bool)arg1;
- (void)setHasPredVolMediaPrct:(bool)arg1;
- (void)setHasPredVolSiriPrct:(bool)arg1;
- (void)setHasPredVolTelephonyPrct:(bool)arg1;
- (void)setHasRefMicdBA:(bool)arg1;
- (void)setHasRefMicdBC:(bool)arg1;
- (void)setHasSmallWindowSize:(bool)arg1;
- (void)setHasSmoothEae:(bool)arg1;
- (void)setHasSpeechPresenceProbability:(bool)arg1;
- (void)setHasStreamType:(bool)arg1;
- (void)setHasVolumeChangeFlag:(bool)arg1;
- (void)setHasWindSpeechAggressorFlag:(bool)arg1;
- (unsigned int)smallWindowSize;
- (unsigned int)smoothEae;
- (unsigned int)speechPresenceProbability;
- (unsigned int)streamType;
- (unsigned int)volumeChangeFlag;
- (unsigned int)windSpeechAggressorFlag;
- (void)writeTo:(id)arg1;

@end
