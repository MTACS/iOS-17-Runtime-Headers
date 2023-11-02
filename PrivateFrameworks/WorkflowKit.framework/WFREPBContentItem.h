
@interface WFREPBContentItem : PBCodable <NSCopying> {
    int  _encodingType;
    NSData * _item;
}

@property (nonatomic) int encodingType;
@property (nonatomic, retain) NSData *item;

- (void).cxx_destruct;
- (int)StringAsEncodingType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)encodingType;
- (id)encodingTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncodingType:(int)arg1;
- (void)setItem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
