
@interface GTReplaySessionInfo : NSObject <NSSecureCoding> {
    unsigned long long  _accelerationViewerVersion;
    NSURL * _gputraceURL;
    unsigned long long  _shaderDebuggerVersion;
    unsigned long long  _shaderProfilerVersion;
}

@property (nonatomic) unsigned long long accelerationViewerVersion;
@property (nonatomic, retain) NSURL *gputraceURL;
@property (nonatomic) unsigned long long shaderDebuggerVersion;
@property (nonatomic) unsigned long long shaderProfilerVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accelerationViewerVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)gputraceURL;
- (id)initWithCoder:(id)arg1;
- (void)setAccelerationViewerVersion:(unsigned long long)arg1;
- (void)setGputraceURL:(id)arg1;
- (void)setShaderDebuggerVersion:(unsigned long long)arg1;
- (void)setShaderProfilerVersion:(unsigned long long)arg1;
- (unsigned long long)shaderDebuggerVersion;
- (unsigned long long)shaderProfilerVersion;

@end
