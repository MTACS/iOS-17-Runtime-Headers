
@interface SIModel : NSObject {
    SINetworkConfiguration * _config;
    SICoreAnalyticManager * _coreAnalyticManager;
    double  _frameTimestamp;
    unsigned long long  _inferenceSignpostEventEnd;
    unsigned long long  _inferenceSignpostEventStart;
    NSDictionary * _inputs;
    <SINetworkProtocol> * _network;
    NSDictionary * _outputs;
}

@property (nonatomic, retain) SINetworkConfiguration *config;
@property (nonatomic, retain) SICoreAnalyticManager *coreAnalyticManager;
@property double frameTimestamp;
@property (nonatomic) unsigned long long inferenceSignpostEventEnd;
@property (nonatomic) unsigned long long inferenceSignpostEventStart;
@property (retain) NSDictionary *inputs;
@property (nonatomic, retain) <SINetworkProtocol> *network;
@property (retain) NSDictionary *outputs;

- (void).cxx_destruct;
- (void)addPrewiringBuffersToStreamWithInputPools:(id)arg1 outputPools:(id)arg2 clearWiredBuffer:(bool)arg3;
- (id)config;
- (id)coreAnalyticManager;
- (long long)evaluateWithInput:(id)arg1 outputs:(id)arg2;
- (double)frameTimestamp;
- (id)getConfiguration;
- (struct CGSize { double x1; double x2; })getInputResolution;
- (id)getOpsForLibrary;
- (struct CGSize { double x1; double x2; })getOutputResolution;
- (unsigned long long)inferenceSignpostEventEnd;
- (unsigned long long)inferenceSignpostEventStart;
- (id)initWithNetworkConfiguration:(id)arg1;
- (id)inputs;
- (id)keysForCoreAnalyticAccumulatedData;
- (id)network;
- (id)networkVersion;
- (id)outputs;
- (void)setConfig:(id)arg1;
- (void)setCoreAnalyticManager:(id)arg1;
- (void)setFrameTimestamp:(double)arg1;
- (void)setInferenceSignpostEventEnd:(unsigned long long)arg1;
- (void)setInferenceSignpostEventStart:(unsigned long long)arg1;
- (void)setInputs:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setOutputs:(id)arg1;
- (bool)switchNetworkConfiguration:(long long)arg1;
- (void)unwirePrewiringBuffers;

@end
