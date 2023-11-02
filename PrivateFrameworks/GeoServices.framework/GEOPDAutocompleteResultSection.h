
@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _allowedTypeClientOnlySections;
    int  _contentType;
    bool  _enableMapsSuggestServerReranking;
    bool  _enforceServerResultsOrder;
    NSMutableArray * _entries;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _excludedClientResultTypes;
    struct { 
        unsigned int has_contentType : 1; 
        unsigned int has_numVisibleResults : 1; 
        unsigned int has_suggestionType : 1; 
        unsigned int has_type : 1; 
        unsigned int has_enableMapsSuggestServerReranking : 1; 
        unsigned int has_enforceServerResultsOrder : 1; 
        unsigned int has_isSectionForClientOnlyResults : 1; 
        unsigned int has_shouldInterleaveClientResults : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_allowedTypeClientOnlySections : 1; 
        unsigned int read_excludedClientResultTypes : 1; 
        unsigned int read_includedClientResultTypes : 1; 
        unsigned int read_entries : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _includedClientResultTypes;
    bool  _isSectionForClientOnlyResults;
    NSString * _name;
    int  _numVisibleResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _shouldInterleaveClientResults;
    int  _suggestionType;
    int  _type;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
