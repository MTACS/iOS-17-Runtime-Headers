
@interface NPKProtoOpenURLRequest : PBRequest <NSCopying> {
    NSString * _urlString;
}

@property (nonatomic, readonly) bool hasUrlString;
@property (nonatomic, retain) NSString *urlString;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUrlString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;
- (void)writeTo:(id)arg1;

@end
