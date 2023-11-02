
@interface CMIInferenceNetworkInstanceEspressoV1 : NSObject <CMIInferenceNetworkInstance> {
    NSArray * _bindings;
    NSArray * _inputTextures;
    unsigned long long  _instanceId;
    NSArray * _outputTextures;
    CMIInferenceNetworkEspressoV1 * _parentNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inputTextures;
@property (nonatomic) unsigned long long instanceId;
@property (nonatomic, retain) NSArray *outputTextures;
@property (nonatomic) CMIInferenceNetworkEspressoV1 *parentNetwork;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_allocateTexturesWithDevice:(id)arg1 firstInstance:(id)arg2 ports:(id)arg3 useTextureArrays:(bool)arg4 outputTextureArray:(id)arg5;
- (int)_bindPixelBuffersToNetwork;
- (id)inputTextures;
- (unsigned long long)instanceId;
- (id)outputTextures;
- (id)parentNetwork;
- (void)setInputTextures:(id)arg1;
- (void)setInstanceId:(unsigned long long)arg1;
- (void)setOutputTextures:(id)arg1;
- (void)setParentNetwork:(id)arg1;
- (int)synchronizeMetalWaitOnNetworkSignal:(id)arg1;
- (int)synchronizeNetworkWaitOnMetalSignal:(id)arg1;

@end
