
@interface GEOSuggestionEntry : PBCodable <NSCopying> {
    NSString * _calloutTitle;
    NSMutableArray * _displayLines;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_textHighlights : 1; 
        unsigned int read_calloutTitle : 1; 
        unsigned int read_displayLines : 1; 
        unsigned int read_iconID : 1; 
        unsigned int read_latlng : 1; 
        unsigned int read_namedFeatures : 1; 
        unsigned int read_searchQueryDisplayString : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _iconID;
    GEOLatLng * _latlng;
    NSMutableArray * _namedFeatures;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchQueryDisplayString;
    NSData * _suggestionEntryMetadata;
    struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _textHighlights;
    unsigned long long  _textHighlightsCount;
    unsigned long long  _textHighlightsSpace;
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
