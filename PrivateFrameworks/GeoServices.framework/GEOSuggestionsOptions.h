
@interface GEOSuggestionsOptions : PBCodable <NSCopying> {
    int  _entriesType;
    struct { 
        unsigned int has_entriesType : 1; 
        unsigned int has_listType : 1; 
        unsigned int has_includeRankingFeatures : 1; 
        unsigned int has_normalizePOIs : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_suggestionMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeRankingFeatures;
    int  _listType;
    bool  _normalizePOIs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
