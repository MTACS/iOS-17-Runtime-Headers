
@interface GEOPDQuickLinkParams : PBCodable <NSCopying> {
    struct { 
        unsigned int has_quickLinkItemIndex : 1; 
    }  _flags;
    int  _quickLinkItemIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasQuickLinkItemIndex;
@property (nonatomic) int quickLinkItemIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQuickLinkItemIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)quickLinkItemIndex;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasQuickLinkItemIndex:(bool)arg1;
- (void)setQuickLinkItemIndex:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
