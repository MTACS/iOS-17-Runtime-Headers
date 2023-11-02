
@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying> {
    GEOLocalizedString * _displayName;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_venueIdentifier : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueIdentifier;
}

@property (nonatomic, retain) GEOLocalizedString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasStyleAttributes;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasVenueIdentifier;
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
- (void)setDisplayName:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setVenueIdentifier:(id)arg1;
- (id)styleAttributes;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (id)venueIdentifier;
- (void)writeTo:(id)arg1;

@end
