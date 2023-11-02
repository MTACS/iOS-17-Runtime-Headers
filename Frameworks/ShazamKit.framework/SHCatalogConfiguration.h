
@interface SHCatalogConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _installationID;
    SHRange * _signatureDurationRange;
    double  _streamingBufferDuration;
}

@property (nonatomic, copy) NSString *installationID;
@property (nonatomic, retain) SHRange *signatureDurationRange;
@property (nonatomic) double streamingBufferDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)installationID;
- (void)setInstallationID:(id)arg1;
- (void)setSignatureDurationRange:(id)arg1;
- (void)setStreamingBufferDuration:(double)arg1;
- (id)signatureDurationRange;
- (double)streamingBufferDuration;

@end
