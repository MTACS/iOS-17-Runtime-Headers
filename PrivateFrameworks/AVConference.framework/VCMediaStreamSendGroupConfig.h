
@interface VCMediaStreamSendGroupConfig : VCMediaStreamGroupConfig {
    NSObject<VCRedundancyControllerProtocol> * _redundancyController;
    unsigned int  _redundancyMode;
    unsigned int  _redundancyPercentage;
    bool  _shouldSynchronizeWithSourceRTPTimestamps;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _streamGroupMode;
}

@property (nonatomic, retain) NSObject<VCRedundancyControllerProtocol> *redundancyController;
@property (nonatomic) unsigned int redundancyMode;
@property (nonatomic) unsigned int redundancyPercentage;
@property (nonatomic) bool shouldSynchronizeWithSourceRTPTimestamps;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) unsigned int streamGroupMode;

- (void)dealloc;
- (id)redundancyController;
- (unsigned int)redundancyMode;
- (unsigned int)redundancyPercentage;
- (void)setRedundancyController:(id)arg1;
- (void)setRedundancyMode:(unsigned int)arg1;
- (void)setRedundancyPercentage:(unsigned int)arg1;
- (void)setShouldSynchronizeWithSourceRTPTimestamps:(bool)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setStreamGroupMode:(unsigned int)arg1;
- (bool)shouldSynchronizeWithSourceRTPTimestamps;
- (id)statisticsCollector;
- (unsigned int)streamGroupMode;

@end
