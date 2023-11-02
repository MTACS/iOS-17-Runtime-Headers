
@interface GEOTrailingEntityActionDetails : PBCodable <NSCopying> {
    NSString * _displayedString;
    struct { 
        unsigned int has_trailingEntityType : 1; 
    }  _flags;
    int  _trailingEntityType;
}

@property (nonatomic, retain) NSString *displayedString;
@property (nonatomic, readonly) bool hasDisplayedString;
@property (nonatomic) bool hasTrailingEntityType;
@property (nonatomic) int trailingEntityType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTrailingEntityType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedString;
- (bool)hasDisplayedString;
- (bool)hasTrailingEntityType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedString:(id)arg1;
- (void)setHasTrailingEntityType:(bool)arg1;
- (void)setTrailingEntityType:(int)arg1;
- (int)trailingEntityType;
- (id)trailingEntityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
