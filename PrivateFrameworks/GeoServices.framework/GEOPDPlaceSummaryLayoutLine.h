
@interface GEOPDPlaceSummaryLayoutLine : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isDynamicContextLine : 1; 
        unsigned int has_shouldOmitSpacingDelimiter : 1; 
    }  _flags;
    bool  _isDynamicContextLine;
    bool  _shouldOmitSpacingDelimiter;
    NSMutableArray * _units;
}

@property (nonatomic) bool hasIsDynamicContextLine;
@property (nonatomic) bool hasShouldOmitSpacingDelimiter;
@property (nonatomic) bool isDynamicContextLine;
@property (nonatomic) bool shouldOmitSpacingDelimiter;
@property (nonatomic, retain) NSMutableArray *units;

+ (bool)isValid:(id)arg1;
+ (Class)unitType;

- (void).cxx_destruct;
- (void)addUnit:(id)arg1;
- (void)clearUnits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsDynamicContextLine;
- (bool)hasShouldOmitSpacingDelimiter;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDynamicContextLine;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDynamicContextLine:(bool)arg1;
- (void)setHasShouldOmitSpacingDelimiter:(bool)arg1;
- (void)setIsDynamicContextLine:(bool)arg1;
- (void)setShouldOmitSpacingDelimiter:(bool)arg1;
- (void)setUnits:(id)arg1;
- (bool)shouldOmitSpacingDelimiter;
- (id)unitAtIndex:(unsigned long long)arg1;
- (id)units;
- (unsigned long long)unitsCount;
- (void)writeTo:(id)arg1;

@end
