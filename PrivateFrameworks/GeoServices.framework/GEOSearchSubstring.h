
@interface GEOSearchSubstring : PBCodable <NSCopying> {
    int  _beginIndex;
    int  _endIndex;
    NSMutableArray * _spanDatas;
    int  _stringType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int beginIndex;
@property (nonatomic) int endIndex;
@property (nonatomic, retain) NSMutableArray *spanDatas;
@property (nonatomic) int stringType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)spanDataType;

- (void).cxx_destruct;
- (int)StringAsStringType:(id)arg1;
- (void)addSpanData:(id)arg1;
- (int)beginIndex;
- (void)clearSpanDatas;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBeginIndex:(int)arg1;
- (void)setEndIndex:(int)arg1;
- (void)setSpanDatas:(id)arg1;
- (void)setStringType:(int)arg1;
- (id)spanDataAtIndex:(unsigned long long)arg1;
- (id)spanDatas;
- (unsigned long long)spanDatasCount;
- (int)stringType;
- (id)stringTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
