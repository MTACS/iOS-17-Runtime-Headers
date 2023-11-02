
@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding> {
    NSString * _caarFilePath;
    unsigned long long  _estimatedMemoryImpact;
}

@property (nonatomic, copy) NSString *caarFilePath;
@property (nonatomic) unsigned long long estimatedMemoryImpact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caarFilePath;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedMemoryImpact;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCaarFilePath:(id)arg1;
- (void)setEstimatedMemoryImpact:(unsigned long long)arg1;

@end
