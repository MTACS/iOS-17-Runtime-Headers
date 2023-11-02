
@interface CSSmartSiriVolumeEstimate : NSObject <NSSecureCoding> {
    NSString * _debugLogPath;
    float  _volumeEstimate;
}

@property (nonatomic, readonly) NSString *debugLogPath;
@property (nonatomic, readonly) float volumeEstimate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugLogPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolumeEstimate:(float)arg1 debugLogFile:(id)arg2;
- (float)volumeEstimate;

@end
