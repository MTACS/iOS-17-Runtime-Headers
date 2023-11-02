
@interface GEONameInfoList : PBCodable <NSCopying> {
    NSMutableArray * _nameInfos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *nameInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)nameInfoType;

- (void).cxx_destruct;
- (void)addNameInfo:(id)arg1;
- (void)clearNameInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)nameInfoAtIndex:(unsigned long long)arg1;
- (id)nameInfos;
- (unsigned long long)nameInfosCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setNameInfos:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
