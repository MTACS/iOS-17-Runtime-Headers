
@interface CFXAnalyticsManager : JFXAnalyticsManager {
    NSMutableArray * _analyticsDurationData_queryDataQueue;
    CFXPickerSession * _currentPickerSession;
    NSObject<OS_dispatch_queue> * _queryDataQueue;
}

@property (nonatomic, retain) NSMutableArray *analyticsDurationData_queryDataQueue;
@property (nonatomic, retain) CFXPickerSession *currentPickerSession;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CFX_allowedPickerIdentifier:(id)arg1;
- (id)CFX_composedAnalyticsKeyWithAnimoji:(bool)arg1 video:(bool)arg2 frontCamera:(bool)arg3 effectType:(id)arg4;
- (void)addAnalyticsDurationData:(id)arg1;
- (id)analyticsDurationData;
- (id)analyticsDurationData_queryDataQueue;
- (bool)checkIfEventExistsWithName:(id)arg1;
- (id)currentPickerSession;
- (id)dictionaryWithEventName:(id)arg1 value:(double)arg2;
- (void)didSelectEffectOfType:(id)arg1 effectIsNone:(bool)arg2;
- (id)init;
- (bool)isDistribution:(id)arg1;
- (bool)isIncrementScalar:(id)arg1;
- (void)persistAnalyticsDataWithEventName:(id)arg1 value:(double)arg2;
- (void)pickerDidChangePresentationMode;
- (void)pickerDidScroll;
- (void)removeAnalyticsDurationDataItems:(id)arg1;
- (unsigned long long)roundWithNumber:(unsigned long long)arg1;
- (void)setAnalyticsDurationData_queryDataQueue:(id)arg1;
- (void)setCurrentPickerSession:(id)arg1;
- (void)startTrackingPickerWithIdentifier:(id)arg1;
- (void)startTrackingTimeIntervalEventWithName:(id)arg1;
- (void)stopTrackingPickerWithIdentifier:(id)arg1;
- (void)stopTrackingTimeIntervalEventWithName:(id)arg1;
- (void)trackAnimojiWithEffectId:(id)arg1;
- (void)trackEffect:(id)arg1;
- (void)trackEmojiStickerWithEffectId:(id)arg1;
- (void)trackEventWithName:(id)arg1;
- (void)trackEventWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)trackEventWithName:(id)arg1 duration:(double)arg2;
- (void)trackEventWithName:(id)arg1 supportsHDR:(bool)arg2 isHDR:(bool)arg3;
- (void)trackFilterWithEffectId:(id)arg1;
- (void)trackKey:(id)arg1 supportsHDR:(bool)arg2 isHDR:(bool)arg3;
- (void)trackKey:(id)arg1 withDuration:(double)arg2;
- (void)trackKey:(id)arg1 withEffectId:(id)arg2;
- (void)trackLabelWithEffectId:(id)arg1;
- (void)trackMediaSentWithAnimoji:(bool)arg1 video:(bool)arg2 frontCamera:(bool)arg3 filterCount:(unsigned long long)arg4 labelCount:(unsigned long long)arg5 messagesStickerCount:(unsigned long long)arg6 shapeCount:(unsigned long long)arg7 emojiStickerCount:(unsigned long long)arg8 supportsHDR:(bool)arg9 isHDR:(bool)arg10;
- (void)trackMessagesStickerWithEffectId:(id)arg1;
- (void)trackShapeWithEffectId:(id)arg1;

@end
