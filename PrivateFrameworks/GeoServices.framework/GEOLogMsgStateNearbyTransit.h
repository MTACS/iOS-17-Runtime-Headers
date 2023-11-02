
@interface GEOLogMsgStateNearbyTransit : PBCodable <NSCopying> {
    struct { 
        unsigned int has_pinnedLines : 1; 
    }  _flags;
    NSMutableArray * _groups;
    unsigned int  _pinnedLines;
}

@property (nonatomic, retain) NSMutableArray *groups;
@property (nonatomic) bool hasPinnedLines;
@property (nonatomic) unsigned int pinnedLines;

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
- (bool)hasPinnedLines;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pinnedLines;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setHasPinnedLines:(bool)arg1;
- (void)setPinnedLines:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
