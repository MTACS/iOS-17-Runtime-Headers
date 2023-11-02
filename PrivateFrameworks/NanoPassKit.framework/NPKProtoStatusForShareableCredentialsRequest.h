
@interface NPKProtoStatusForShareableCredentialsRequest : PBRequest <NSCopying> {
    NSMutableArray * _shareableCredentialsDatas;
}

@property (nonatomic, retain) NSMutableArray *shareableCredentialsDatas;

+ (Class)shareableCredentialsDataType;

- (void).cxx_destruct;
- (void)addShareableCredentialsData:(id)arg1;
- (void)clearShareableCredentialsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShareableCredentialsDatas:(id)arg1;
- (id)shareableCredentialsDataAtIndex:(unsigned long long)arg1;
- (id)shareableCredentialsDatas;
- (unsigned long long)shareableCredentialsDatasCount;
- (void)writeTo:(id)arg1;

@end
