
@interface NviContext : NSObject {
    unsigned long long  _reqStartAudioSampleId;
    unsigned long long  _reqStartMachAbsTime;
    bool  _requestHistoricalAudio;
    NSString * _rootLogDir;
    bool  _shouldLogRawSensorData;
    NSDictionary * _voiceTriggerInfo;
}

@property (nonatomic) unsigned long long reqStartAudioSampleId;
@property (nonatomic) unsigned long long reqStartMachAbsTime;
@property (nonatomic) bool requestHistoricalAudio;
@property (nonatomic, retain) NSString *rootLogDir;
@property (nonatomic) bool shouldLogRawSensorData;
@property (nonatomic, retain) NSDictionary *voiceTriggerInfo;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)reqStartAudioSampleId;
- (unsigned long long)reqStartMachAbsTime;
- (bool)requestHistoricalAudio;
- (id)rootLogDir;
- (void)setReqStartAudioSampleId:(unsigned long long)arg1;
- (void)setReqStartMachAbsTime:(unsigned long long)arg1;
- (void)setRequestHistoricalAudio:(bool)arg1;
- (void)setRootLogDir:(id)arg1;
- (void)setShouldLogRawSensorData:(bool)arg1;
- (void)setVoiceTriggerInfo:(id)arg1;
- (bool)shouldLogRawSensorData;
- (id)voiceTriggerInfo;

@end
