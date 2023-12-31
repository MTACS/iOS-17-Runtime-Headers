
@interface ACProtobufURL : PBCodable <NSCopying> {
    NSString * _value;
}

@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setValue:(id)arg1;
- (id)url;
- (id)value;
- (void)writeTo:(id)arg1;

@end
