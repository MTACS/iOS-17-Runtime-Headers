
@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate> {
    CoreTelephonyClient * _client;
    NSMutableDictionary * _imsStatusSMSDict;
    NSMutableDictionary * _imsStatusVoiceDict;
    NSMutableDictionary * _maxDataRateDict;
    NSMutableDictionary * _operatorNameDict;
    NSMutableDictionary * _rejectCauseCodeDict;
    NSMutableDictionary * _supportedDataRatesDict;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *imsStatusSMSDict;
@property (retain) NSMutableDictionary *imsStatusVoiceDict;
@property (retain) NSMutableDictionary *maxDataRateDict;
@property (retain) NSMutableDictionary *operatorNameDict;
@property (retain) NSMutableDictionary *rejectCauseCodeDict;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *supportedDataRatesDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)IMSStatusSMS:(id)arg1;
- (bool)IMSStatusVoice:(id)arg1;
- (void)clearCache;
- (id)client;
- (void)dataRatesChanged;
- (void)fetchIMSStatus;
- (void)fetchLocalizedOperatorName;
- (void)fetchMaxDataRate;
- (void)fetchRejectCauseCode;
- (void)fetchSupportedDataRates;
- (id)getLogger;
- (void)handleDataUsageChanged;
- (void)imsRegistrationChanged:(id)arg1 info:(id)arg2;
- (id)imsStatusSMSDict;
- (id)imsStatusVoiceDict;
- (id)init;
- (id)initPrivate;
- (id)localizedOperatorName:(id)arg1;
- (long long)maxDataRate:(id)arg1;
- (id)maxDataRateDict;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (id)operatorNameDict;
- (void)preferredDataSimChanged:(id)arg1;
- (id)rejectCauseCode:(id)arg1;
- (id)rejectCauseCodeDict;
- (void)setClient:(id)arg1;
- (void)setImsStatusSMSDict:(id)arg1;
- (void)setImsStatusVoiceDict:(id)arg1;
- (void)setMaxDataRate:(id)arg1 dataRate:(long long)arg2;
- (void)setMaxDataRateDict:(id)arg1;
- (void)setOperatorNameDict:(id)arg1;
- (void)setRejectCauseCodeDict:(id)arg1;
- (void)setSupportedDataRatesDict:(id)arg1;
- (id)supportedDataRates:(id)arg1;
- (id)supportedDataRatesDict;

@end
