
@interface PPSPBGroupingDimensions : PBCodable <NSCopying> {
    NSMutableArray * _groupBys;
}

@property (nonatomic, retain) NSMutableArray *groupBys;

+ (Class)groupByType;

- (void).cxx_destruct;
- (void)addGroupBy:(id)arg1;
- (void)clearGroupBys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupByAtIndex:(unsigned long long)arg1;
- (id)groupBys;
- (unsigned long long)groupBysCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupBys:(id)arg1;
- (void)writeTo:(id)arg1;

@end
