
@interface JFXEffectsPreviewRequestHandler : NSObject {
    JFXEffectsPreviewGeneratorJob * _job;
    JFXEffectsPreviewGenerationRequest * _req;
}

@property (nonatomic, retain) JFXEffectsPreviewGeneratorJob *job;
@property (nonatomic, retain) JFXEffectsPreviewGenerationRequest *req;

- (void).cxx_destruct;
- (id)buildCallbackMap:(id)arg1;
- (id)buildPVRenderRequestWithOutputColorSpace:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)job;
- (id)req;
- (void)setJob:(id)arg1;
- (void)setReq:(id)arg1;

@end
