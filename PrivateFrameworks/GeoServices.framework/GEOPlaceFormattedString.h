
@interface GEOPlaceFormattedString : PBCodable <NSCopying> {
    GEOFormattedString * _contactHome;
    GEOFormattedString * _contactOther;
    GEOFormattedString * _contactWork;
    GEOFormattedString * _custom;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_contactHome : 1; 
        unsigned int read_contactOther : 1; 
        unsigned int read_contactWork : 1; 
        unsigned int read_custom : 1; 
        unsigned int read_home : 1; 
        unsigned int read_pointOfInterest : 1; 
        unsigned int read_streetAddress : 1; 
        unsigned int read_unknown : 1; 
        unsigned int read_work : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _home;
    GEOFormattedString * _pointOfInterest;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _streetAddress;
    GEOFormattedString * _unknown;
    PBUnknownFields * _unknownFields;
    GEOFormattedString * _work;
}

@property (nonatomic, retain) GEOFormattedString *contactHome;
@property (nonatomic, retain) GEOFormattedString *contactOther;
@property (nonatomic, retain) GEOFormattedString *contactWork;
@property (nonatomic, retain) GEOFormattedString *custom;
@property (nonatomic, readonly) bool hasContactHome;
@property (nonatomic, readonly) bool hasContactOther;
@property (nonatomic, readonly) bool hasContactWork;
@property (nonatomic, readonly) bool hasCustom;
@property (nonatomic, readonly) bool hasHome;
@property (nonatomic, readonly) bool hasPointOfInterest;
@property (nonatomic, readonly) bool hasStreetAddress;
@property (nonatomic, readonly) bool hasUnknown;
@property (nonatomic, readonly) bool hasWork;
@property (nonatomic, retain) GEOFormattedString *home;
@property (nonatomic, retain) GEOFormattedString *pointOfInterest;
@property (nonatomic, retain) GEOFormattedString *streetAddress;
@property (nonatomic, retain) GEOFormattedString *unknown;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOFormattedString *work;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)contactHome;
- (id)contactOther;
- (id)contactWork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custom;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactHome;
- (bool)hasContactOther;
- (bool)hasContactWork;
- (bool)hasCustom;
- (bool)hasHome;
- (bool)hasPointOfInterest;
- (bool)hasStreetAddress;
- (bool)hasUnknown;
- (bool)hasWork;
- (unsigned long long)hash;
- (id)home;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)pointOfInterest;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactHome:(id)arg1;
- (void)setContactOther:(id)arg1;
- (void)setContactWork:(id)arg1;
- (void)setCustom:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPointOfInterest:(id)arg1;
- (void)setStreetAddress:(id)arg1;
- (void)setUnknown:(id)arg1;
- (void)setWork:(id)arg1;
- (id)streetAddress;
- (id)unknown;
- (id)unknownFields;
- (id)work;
- (void)writeTo:(id)arg1;

@end
