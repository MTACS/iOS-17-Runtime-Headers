
@interface GEOPDAutocompleteParametersAllEntries : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int has_highlightDiff : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_query : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _highlightDiff;
    int  _maxResults;
    NSString * _query;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHighlightDiff;
- (bool)hasMaxResults;
- (bool)hasQuery;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
