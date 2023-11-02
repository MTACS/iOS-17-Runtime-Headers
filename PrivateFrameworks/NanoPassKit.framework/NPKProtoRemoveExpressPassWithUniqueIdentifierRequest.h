
@interface NPKProtoRemoveExpressPassWithUniqueIdentifierRequest : PBRequest <NSCopying> {
    NSString * _uniqueID;
}

@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
