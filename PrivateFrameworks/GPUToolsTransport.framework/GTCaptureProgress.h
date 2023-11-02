
@interface GTCaptureProgress : NSObject <NSSecureCoding> {
    unsigned long long  _captureState;
    unsigned long long  _capturedCommandsBuffers;
    GTCaptureCompletionState * _completionState;
    GTCaptureDescriptor * _descriptor;
    GTCaptureProgressStatistics * _stats;
}

@property (nonatomic) unsigned long long captureState;
@property (nonatomic) unsigned long long capturedCommandsBuffers;
@property (nonatomic, retain) GTCaptureCompletionState *completionState;
@property (nonatomic, retain) GTCaptureDescriptor *descriptor;
@property (nonatomic, retain) GTCaptureProgressStatistics *stats;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)captureState;
- (unsigned long long)capturedCommandsBuffers;
- (id)completionState;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCaptureState:(unsigned long long)arg1;
- (void)setCapturedCommandsBuffers:(unsigned long long)arg1;
- (void)setCompletionState:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setStats:(id)arg1;
- (id)stats;

@end
