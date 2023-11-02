
@interface CMIInferenceDeviceEspressoV2 : NSObject <CMIInferenceDevice>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createExecutionStream;
- (id)init;
- (id)loadNetworkWithPath:(id)arg1;

@end
