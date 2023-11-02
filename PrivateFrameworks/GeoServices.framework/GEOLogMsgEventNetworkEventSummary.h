
@interface GEOLogMsgEventNetworkEventSummary : PBCodable <NSCopying> {
    NSMutableArray * _groups;
}

@property (nonatomic, retain) NSMutableArray *groups;

+ (Class)groupsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addGroups:(id)arg1;
- (void)clearGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groups;
- (id)groupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupsCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)writeTo:(id)arg1;

@end
