
@interface GEOCompanionTransitAlightMessage : PBCodable <NSCopying> {
    GEOPBTransitArtwork * _artwork;
    GEOFormattedString * _detail;
    struct { 
        unsigned int has_stepID : 1; 
        unsigned int has_stopID : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_detail : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _stepID;
    unsigned int  _stopID;
    GEOFormattedString * _title;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasStopID;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) unsigned int stopID;
@property (nonatomic, retain) GEOFormattedString *title;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)artwork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasArtwork;
- (bool)hasDetail;
- (bool)hasIdentifier;
- (bool)hasStepID;
- (bool)hasStopID;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasStopID:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setStopID:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (unsigned int)stepID;
- (unsigned int)stopID;
- (id)title;
- (void)writeTo:(id)arg1;

@end
