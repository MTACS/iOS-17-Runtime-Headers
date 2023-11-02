
@interface HMIVideoAnalyzerProcessingNode : HMIVideoProcessingNode {
    HMIVideoAnalyzerConfiguration * _configuration;
    HMIVideoAnalyzerDynamicConfiguration * _dynamicConfiguration;
}

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (retain) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;

- (void).cxx_destruct;
- (id)configuration;
- (id)dynamicConfiguration;
- (id)initWithConfiguration:(id)arg1;
- (void)setDynamicConfiguration:(id)arg1;

@end
