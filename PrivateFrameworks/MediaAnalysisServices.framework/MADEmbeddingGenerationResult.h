
@interface MADEmbeddingGenerationResult : MADResult {
    NSDate * _assetCreationDate;
    NSData * _checksum;
    NSData * _data;
    unsigned long long  _embeddingType;
    NSData * _thumbnail;
}

@property (nonatomic, readonly, retain) NSDate *assetCreationDate;
@property (nonatomic, readonly, retain) NSData *checksum;
@property (nonatomic, readonly, retain) NSData *data;
@property (nonatomic, readonly) unsigned long long embeddingType;
@property (nonatomic, readonly, retain) NSData *thumbnail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetCreationDate;
- (id)checksum;
- (id)data;
- (id)description;
- (unsigned long long)embeddingType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmbeddingType:(unsigned long long)arg1 assetCreationDate:(id)arg2 data:(id)arg3 checksum:(id)arg4 andThumbnail:(id)arg5;
- (id)thumbnail;

@end
