
@interface CMITiledInferenceProcessorNetworkImpl : NSObject <CMITiledInferenceProcessorNetwork> {
    NSArray * _inputs;
    long long  _networkIndex;
    NSArray * _outputs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inputs;
@property (nonatomic) long long networkIndex;
@property (nonatomic, retain) NSArray *outputs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)inputs;
- (long long)networkIndex;
- (id)outputs;
- (void)setInputs:(id)arg1;
- (void)setNetworkIndex:(long long)arg1;
- (void)setOutputs:(id)arg1;

@end
