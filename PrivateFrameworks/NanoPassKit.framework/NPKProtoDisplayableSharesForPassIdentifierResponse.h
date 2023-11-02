
@interface NPKProtoDisplayableSharesForPassIdentifierResponse : PBCodable <NSCopying> {
    NSMutableArray * _sharesDatas;
}

@property (nonatomic, retain) NSMutableArray *sharesDatas;

+ (Class)sharesDataType;

- (void).cxx_destruct;
- (void)addSharesData:(id)arg1;
- (void)clearSharesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSharesDatas:(id)arg1;
- (id)sharesDataAtIndex:(unsigned long long)arg1;
- (id)sharesDatas;
- (unsigned long long)sharesDatasCount;
- (void)writeTo:(id)arg1;

@end
