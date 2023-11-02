
@interface ANSTISPAlgorithmConfiguration : ANSTConfiguration {
    bool  _enableObjectTracking;
    bool  _enableSegmentation;
    long long  _networkResolution;
    long long  _runningFrameRate;
}

@property (nonatomic) bool enableObjectTracking;
@property (nonatomic) bool enableSegmentation;
@property (nonatomic) long long networkResolution;
@property (nonatomic) long long runningFrameRate;
@property (nonatomic, readonly) unsigned long long version;

- (id)description;
- (bool)enableObjectTracking;
- (bool)enableSegmentation;
- (id)init;
- (id)initWithVersion:(unsigned long long)arg1;
- (long long)networkResolution;
- (long long)runningFrameRate;
- (void)setEnableObjectTracking:(bool)arg1;
- (void)setEnableSegmentation:(bool)arg1;
- (void)setNetworkResolution:(long long)arg1;
- (void)setRunningFrameRate:(long long)arg1;

@end
