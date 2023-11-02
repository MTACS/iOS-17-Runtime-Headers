
@interface GEOAdvisoryCard : PBCodable <NSCopying> {
    GEOAdvisoryCardAction * _action;
    GEOPBTransitArtwork * _artworkOverride;
    GEOFormattedString * _details;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_action : 1; 
        unsigned int read_artworkOverride : 1; 
        unsigned int read_details : 1; 
        unsigned int read_metadata : 1; 
        unsigned int read_timeString : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _timeString;
    GEOFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOAdvisoryCardAction *action;
@property (nonatomic, retain) GEOPBTransitArtwork *artworkOverride;
@property (nonatomic, retain) GEOFormattedString *details;
@property (nonatomic, readonly) bool hasAction;
@property (nonatomic, readonly) bool hasArtworkOverride;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasTimeString;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *metadata;
@property (nonatomic, retain) GEOFormattedString *timeString;
@property (nonatomic, retain) GEOFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (id)artworkOverride;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasArtworkOverride;
- (bool)hasDetails;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMetadata;
- (bool)hasTimeString;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setArtworkOverride:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTimeString:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)timeString;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
