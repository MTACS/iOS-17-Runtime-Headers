
@interface CAXPBContextualActionParameter : PBCodable <NSCopying> {
    NSData * _parameterMetadata;
    NSString * _parameterType;
}

@property (nonatomic, readonly) bool hasParameterMetadata;
@property (nonatomic, retain) NSData *parameterMetadata;
@property (nonatomic, retain) NSString *parameterType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParameterMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameterMetadata;
- (id)parameterType;
- (bool)readFrom:(id)arg1;
- (void)setParameterMetadata:(id)arg1;
- (void)setParameterType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
