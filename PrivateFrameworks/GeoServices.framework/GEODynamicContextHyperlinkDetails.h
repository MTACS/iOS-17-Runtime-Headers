
@interface GEODynamicContextHyperlinkDetails : PBCodable <NSCopying> {
    NSString * _displayedString;
    struct { 
        unsigned int has_layoutType : 1; 
    }  _flags;
    int  _layoutType;
}

@property (nonatomic, retain) NSString *displayedString;
@property (nonatomic, readonly) bool hasDisplayedString;
@property (nonatomic) bool hasLayoutType;
@property (nonatomic) int layoutType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLayoutType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedString;
- (bool)hasDisplayedString;
- (bool)hasLayoutType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)layoutType;
- (id)layoutTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedString:(id)arg1;
- (void)setHasLayoutType:(bool)arg1;
- (void)setLayoutType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
