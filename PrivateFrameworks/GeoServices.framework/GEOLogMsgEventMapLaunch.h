
@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int read_launchUri : 1; 
        unsigned int read_sourceAppId : 1; 
        unsigned int read_timeToLeave : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _launchUri;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceAppId;
    GEOTimeToLeaveMapLaunch * _timeToLeave;
}

@property (nonatomic, readonly) bool hasLaunchUri;
@property (nonatomic, readonly) bool hasSourceAppId;
@property (nonatomic, readonly) bool hasTimeToLeave;
@property (nonatomic, retain) NSString *launchUri;
@property (nonatomic, retain) NSString *sourceAppId;
@property (nonatomic, retain) GEOTimeToLeaveMapLaunch *timeToLeave;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLaunchUri;
- (bool)hasSourceAppId;
- (bool)hasTimeToLeave;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)launchUri;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLaunchUri:(id)arg1;
- (void)setSourceAppId:(id)arg1;
- (void)setTimeToLeave:(id)arg1;
- (id)sourceAppId;
- (id)timeToLeave;
- (void)writeTo:(id)arg1;

@end
