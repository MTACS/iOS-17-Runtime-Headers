
@interface GEOHyperlinkMetaData : PBCodable <NSCopying> {
    NSString * _displayedString;
    struct { 
        unsigned int has_hyperlinkType : 1; 
    }  _flags;
    int  _hyperlinkType;
}

@property (nonatomic, retain) NSString *displayedString;
@property (nonatomic, readonly) bool hasDisplayedString;
@property (nonatomic) bool hasHyperlinkType;
@property (nonatomic) int hyperlinkType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsHyperlinkType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedString;
- (bool)hasDisplayedString;
- (bool)hasHyperlinkType;
- (unsigned long long)hash;
- (int)hyperlinkType;
- (id)hyperlinkTypeAsString:(int)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedString:(id)arg1;
- (void)setHasHyperlinkType:(bool)arg1;
- (void)setHyperlinkType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
