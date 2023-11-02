
@interface GTFileTransferOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _chunkSize;
    long long  _compressionAlgorithm;
}

@property (nonatomic) unsigned long long chunkSize;
@property (nonatomic) long long compressionAlgorithm;

+ (bool)supportsSecureCoding;

- (unsigned long long)chunkSize;
- (long long)compressionAlgorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setChunkSize:(unsigned long long)arg1;
- (void)setCompressionAlgorithm:(long long)arg1;

@end
