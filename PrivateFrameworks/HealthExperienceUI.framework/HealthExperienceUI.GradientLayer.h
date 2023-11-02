
@interface HealthExperienceUI.GradientLayer : CAMetalLayer {
    void commandQueue;
    void pipelineState;
    void texcoordsBuffer;
    void uniforms;
    void uniformsBuffer;
}

- (void).cxx_destruct;
- (void)display;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end
