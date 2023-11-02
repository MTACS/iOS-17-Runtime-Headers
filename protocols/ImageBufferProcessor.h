
@protocol ImageBufferProcessor <NSObject>

@required

- (NSDictionary *)cameraInfoByPortType;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (void)setCameraInfoByPortType:(NSDictionary *)arg1;
- (void)setTuningParameters:(NSDictionary *)arg1;
- (int)setup;
- (NSDictionary *)tuningParameters;

@optional

- (int)prewarmWithTuningParameters:(NSDictionary *)arg1;

@end
