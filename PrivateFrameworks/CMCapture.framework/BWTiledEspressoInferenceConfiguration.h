
@interface BWTiledEspressoInferenceConfiguration : BWInferenceConfiguration {
    bool  _forceSynchronousInference;
    <MTLCommandQueue> * _metalCommandQueue;
}

@property (nonatomic) bool forceSynchronousInference;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;

- (void)dealloc;
- (bool)forceSynchronousInference;
- (id)initWithInferenceType:(int)arg1 metalCommandQueue:(id)arg2;
- (id)metalCommandQueue;
- (void)setForceSynchronousInference:(bool)arg1;
- (void)setMetalCommandQueue:(id)arg1;

@end
