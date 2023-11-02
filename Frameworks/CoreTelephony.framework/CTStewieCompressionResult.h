
@interface CTStewieCompressionResult : NSObject <NSCopying, NSSecureCoding> {
    long long  _codecId;
    NSData * _compressedData;
    bool  _isPreferredCodec;
}

@property (nonatomic) long long codecId;
@property (nonatomic, retain) NSData *compressedData;
@property (nonatomic) bool isPreferredCodec;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)codecId;
- (id)compressedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPreferredCodec;
- (void)setCodecId:(long long)arg1;
- (void)setCompressedData:(id)arg1;
- (void)setIsPreferredCodec:(bool)arg1;

@end
