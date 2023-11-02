
@interface GEORPSearchFeedbackContext : PBCodable <NSCopying> {
    NSMutableArray * _autocompleteSuggestionLists;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_autocompleteSuggestionLists : 1; 
        unsigned int read_requestContext : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPPlaceRequestResponse * _requestContext;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *autocompleteSuggestionLists;
@property (nonatomic, readonly) bool hasRequestContext;
@property (nonatomic, retain) GEORPPlaceRequestResponse *requestContext;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)autocompleteSuggestionListType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAutocompleteSuggestionList:(id)arg1;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1;
- (id)autocompleteSuggestionLists;
- (unsigned long long)autocompleteSuggestionListsCount;
- (void)clearAutocompleteSuggestionLists;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRequestContext;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestContext;
- (void)setAutocompleteSuggestionLists:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
