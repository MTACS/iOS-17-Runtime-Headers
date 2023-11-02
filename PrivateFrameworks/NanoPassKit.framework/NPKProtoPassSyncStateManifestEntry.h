
@interface NPKProtoPassSyncStateManifestEntry : PBCodable <NSCopying> {
    NSString * _fileHash;
    NSString * _relativePath;
}

@property (nonatomic, retain) NSString *fileHash;
@property (nonatomic, retain) NSString *relativePath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fileHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relativePath;
- (void)setFileHash:(id)arg1;
- (void)setRelativePath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
