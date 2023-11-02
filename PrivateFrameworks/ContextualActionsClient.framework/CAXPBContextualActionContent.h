
@interface CAXPBContextualActionContent : PBCodable <NSCopying> {
    NSData * _contentMetadata;
    NSString * _contentType;
}

@property (nonatomic, retain) NSData *contentMetadata;
@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, readonly) bool hasContentMetadata;

- (void).cxx_destruct;
- (id)contentMetadata;
- (id)contentType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentMetadata:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
