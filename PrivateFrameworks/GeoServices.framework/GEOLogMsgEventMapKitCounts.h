
@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {
    NSMutableArray * _mapKitCounts;
}

@property (nonatomic, retain) NSMutableArray *mapKitCounts;

+ (bool)isValid:(id)arg1;
+ (Class)mapKitCountsType;

- (void).cxx_destruct;
- (void)addMapKitCounts:(id)arg1;
- (void)clearMapKitCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapKitCounts;
- (id)mapKitCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapKitCountsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMapKitCounts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
