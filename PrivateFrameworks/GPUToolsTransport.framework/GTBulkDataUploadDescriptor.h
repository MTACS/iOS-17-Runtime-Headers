
@interface GTBulkDataUploadDescriptor : NSObject <NSSecureCoding> {
    long long  _compressionAlgorithm;
    unsigned long long  _sizeHint;
}

@property (nonatomic) long long compressionAlgorithm;
@property (nonatomic) unsigned long long sizeHint;

+ (bool)supportsSecureCoding;

- (long long)compressionAlgorithm;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCompressionAlgorithm:(long long)arg1;
- (void)setSizeHint:(unsigned long long)arg1;
- (unsigned long long)sizeHint;

@end
