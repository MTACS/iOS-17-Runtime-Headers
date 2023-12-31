
@interface AWSampleLogData : NSObject {
    unsigned long long  _cumulativeSamplingTime;
    NSString * _identifier;
    bool  _pollingClient;
    unsigned long long  _samplingInterval;
    unsigned long long  _samplingStartTime;
}

@property (nonatomic) unsigned long long cumulativeSamplingTime;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool pollingClient;
@property (nonatomic) unsigned long long samplingInterval;
@property (nonatomic) unsigned long long samplingStartTime;

- (void).cxx_destruct;
- (unsigned long long)cumulativeSamplingTime;
- (id)identifier;
- (bool)pollingClient;
- (unsigned long long)samplingInterval;
- (unsigned long long)samplingStartTime;
- (void)setCumulativeSamplingTime:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPollingClient:(bool)arg1;
- (void)setSamplingInterval:(unsigned long long)arg1;
- (void)setSamplingStartTime:(unsigned long long)arg1;

@end
