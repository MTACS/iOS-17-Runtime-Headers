
@interface GTTelemetryDeviceObject : NSObject <NSSecureCoding> {
    unsigned long long  _commits;
    GTTelemetryRecordObject * _gpuTime;
    unsigned long long  _streamRef;
}

@property (nonatomic) unsigned long long commits;
@property (nonatomic, retain) GTTelemetryRecordObject *gpuTime;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)commits;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gpuTime;
- (id)initWithCoder:(id)arg1;
- (void)setCommits:(unsigned long long)arg1;
- (void)setGpuTime:(id)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (unsigned long long)streamRef;

@end
