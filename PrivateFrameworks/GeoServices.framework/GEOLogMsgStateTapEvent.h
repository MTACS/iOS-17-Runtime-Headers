
@interface GEOLogMsgStateTapEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int has_pinType : 1; 
    }  _flags;
    int  _pinType;
    NSMutableArray * _searchResults;
}

@property (nonatomic) bool hasPinType;
@property (nonatomic) int pinType;
@property (nonatomic, retain) NSMutableArray *searchResults;

+ (bool)isValid:(id)arg1;
+ (Class)searchResultsType;

- (void).cxx_destruct;
- (int)StringAsPinType:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (void)clearSearchResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPinType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)pinType;
- (id)pinTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchResults;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (void)setHasPinType:(bool)arg1;
- (void)setPinType:(int)arg1;
- (void)setSearchResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
