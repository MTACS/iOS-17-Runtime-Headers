
@interface GEOPDPlaceSummaryLayoutUnitHours : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _allowedHoursStates;
    struct { 
        unsigned int has_type : 1; 
    }  _flags;
    int  _type;
}

@property (nonatomic, readonly) int*allowedHoursStates;
@property (nonatomic, readonly) unsigned long long allowedHoursStatesCount;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (int)StringAsAllowedHoursStates:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addAllowedHoursState:(int)arg1;
- (int)allowedHoursStateAtIndex:(unsigned long long)arg1;
- (int*)allowedHoursStates;
- (id)allowedHoursStatesAsString:(int)arg1;
- (unsigned long long)allowedHoursStatesCount;
- (void)clearAllowedHoursStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllowedHoursStates:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
