
@interface BWDeepFusionProcessorRequest : NSObject {
    bool  _cacheBuffers;
    <BWDeepFusionProcessorControllerDelegate> * _delegate;
    int  _demosaicedRawErr;
    int  _err;
    NSSet * _expectedBufferTypes;
    int  _expectedEVZeroFrameCount;
    BWDeepFusionProcessorInput * _input;
    <IBPDeepFusionOutput> * _output;
}

@property (nonatomic) bool cacheBuffers;
@property (nonatomic, readonly) <BWDeepFusionProcessorControllerDelegate> *delegate;
@property (nonatomic) int demosaicedRawErr;
@property (nonatomic) int err;
@property (nonatomic, readonly) NSSet *expectedBufferTypes;
@property (nonatomic, readonly) BWDeepFusionProcessorInput *input;
@property (nonatomic, retain) <IBPDeepFusionOutput> *output;

- (bool)cacheBuffers;
- (void)dealloc;
- (id)delegate;
- (int)demosaicedRawErr;
- (id)description;
- (int)err;
- (id)expectedBufferTypes;
- (id)input;
- (id)output;
- (void)setCacheBuffers:(bool)arg1;
- (void)setDemosaicedRawErr:(int)arg1;
- (void)setErr:(int)arg1;
- (void)setOutput:(id)arg1;

@end
