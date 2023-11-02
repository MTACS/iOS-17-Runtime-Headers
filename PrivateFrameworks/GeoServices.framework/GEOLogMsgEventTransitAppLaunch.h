
@interface GEOLogMsgEventTransitAppLaunch : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    GEOLatLng * _destination;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int read_bundleIdentifier : 1; 
        unsigned int read_destination : 1; 
        unsigned int read_source : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLatLng * _source;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) GEOLatLng *destination;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) GEOLatLng *source;
@property (nonatomic) double timestamp;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDestination;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasSource;
- (bool)hasTimestamp;
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
- (void)setBundleIdentifier:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)source;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
