
@interface SpeakerRecognition.CSVTUITrainingSessionHelperResult : NSObject {
    void isTriggerEvent;
    void isUtteranceSaved;
    void triggerEndSampleCount;
    void triggerScore;
    void triggerStartSampleCount;
    void triggeredPhId;
}

@property (nonatomic) bool isTriggerEvent;
@property (nonatomic) bool isUtteranceSaved;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) float triggerScore;
@property (nonatomic) unsigned long long triggerStartSampleCount;
@property (nonatomic) unsigned long long triggeredPhId;

- (id)init;
- (bool)isTriggerEvent;
- (bool)isUtteranceSaved;
- (void)setIsTriggerEvent:(bool)arg1;
- (void)setIsUtteranceSaved:(bool)arg1;
- (void)setTriggerEndSampleCount:(unsigned long long)arg1;
- (void)setTriggerScore:(float)arg1;
- (void)setTriggerStartSampleCount:(unsigned long long)arg1;
- (void)setTriggeredPhId:(unsigned long long)arg1;
- (unsigned long long)triggerEndSampleCount;
- (float)triggerScore;
- (unsigned long long)triggerStartSampleCount;
- (unsigned long long)triggeredPhId;

@end
