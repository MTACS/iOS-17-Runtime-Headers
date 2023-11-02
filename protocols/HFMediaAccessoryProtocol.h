
@protocol HFMediaAccessoryProtocol <NSObject>

@required

- (HFMediaAccessoryCommonSettingsManager *)commonSettingsManager;
- (NAFuture *)enableDoorbellChime:(bool)arg1;
- (bool)isAnnounceEnabled;
- (bool)isAudioAnalysisEnabled;
- (bool)isDoorbellChimeEnabled;
- (bool)isSiriDisabled;
- (bool)isSiriEndpointAccessory;
- (NAFuture *)setEnableAnnounce:(bool)arg1;
- (NAFuture *)setEnableAudioAnalysis:(bool)arg1;
- (NAFuture *)setSiriDisabled:(bool)arg1;

@end
