
@interface GTReplayProfileTimeline : GTReplayProfileRequest {
    bool  _shaderProfiling;
}

@property (nonatomic) bool shaderProfiling;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShaderProfiling:(bool)arg1;
- (bool)shaderProfiling;

@end
