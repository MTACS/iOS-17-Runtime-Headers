
@interface GEOMapsServerMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int read_mapsSearchResults : 1; 
        unsigned int read_suggestionEntryMetadataDisplayeds : 1; 
        unsigned int read_suggestionEntryMetadataTappedOn : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _mapsSearchResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _suggestionEntryMetadataDisplayeds;
    NSData * _suggestionEntryMetadataTappedOn;
}

@property (nonatomic, readonly) bool hasSuggestionEntryMetadataTappedOn;
@property (nonatomic, retain) NSMutableArray *mapsSearchResults;
@property (nonatomic, retain) NSMutableArray *suggestionEntryMetadataDisplayeds;
@property (nonatomic, retain) NSData *suggestionEntryMetadataTappedOn;

+ (bool)isValid:(id)arg1;
+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;

- (void).cxx_destruct;
- (void)addMapsSearchResult:(id)arg1;
- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)clearMapsSearchResults;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasSuggestionEntryMetadataTappedOn;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapsSearchResultAtIndex:(unsigned long long)arg1;
- (id)mapsSearchResults;
- (unsigned long long)mapsSearchResultsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMapsSearchResults:(id)arg1;
- (void)setSuggestionEntryMetadataDisplayeds:(id)arg1;
- (void)setSuggestionEntryMetadataTappedOn:(id)arg1;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1;
- (id)suggestionEntryMetadataDisplayeds;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (id)suggestionEntryMetadataTappedOn;
- (void)writeTo:(id)arg1;

@end
