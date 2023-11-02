
@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent {
    unsigned long long  _iCloudPlanUpgradeState;
    unsigned long long  _iCloudUpgradeOfferPresented;
    unsigned long long  _numCamerasWithRecording;
}

@property (nonatomic) unsigned long long iCloudPlanUpgradeState;
@property (nonatomic) unsigned long long iCloudUpgradeOfferPresented;
@property (nonatomic) unsigned long long numCamerasWithRecording;

- (unsigned long long)iCloudPlanUpgradeState;
- (unsigned long long)iCloudUpgradeOfferPresented;
- (id)initWithData:(id)arg1;
- (unsigned long long)numCamerasWithRecording;
- (id)payload;
- (void)setICloudPlanUpgradeState:(unsigned long long)arg1;
- (void)setICloudUpgradeOfferPresented:(unsigned long long)arg1;
- (void)setNumCamerasWithRecording:(unsigned long long)arg1;

@end
