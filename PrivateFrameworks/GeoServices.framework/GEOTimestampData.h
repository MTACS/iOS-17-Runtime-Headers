
@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying> {
    bool  _displayTimezone;
    struct { 
        unsigned int has_timestampVal : 1; 
        unsigned int has_displayTimezone : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_formatPattern : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _formatPattern;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _timestampVal;
    NSString * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayTimezone;
@property (nonatomic, readonly) NSString *formatPattern;
@property (nonatomic, retain) NSString *formatPattern;
@property (nonatomic) bool hasDisplayTimezone;
@property (nonatomic, readonly) bool hasFormatPattern;
@property (nonatomic) bool hasTimestampVal;
@property (nonatomic, readonly) bool hasTimezone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) unsigned int timestampVal;
@property (nonatomic, retain) NSString *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayTimeZone;
- (bool)displayTimezone;
- (id)formatPattern;
- (bool)hasDisplayTimezone;
- (bool)hasFormatPattern;
- (bool)hasTimestampVal;
- (bool)hasTimezone;
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
- (void)setDisplayTimezone:(bool)arg1;
- (void)setFormatPattern:(id)arg1;
- (void)setHasDisplayTimezone:(bool)arg1;
- (void)setHasTimestampVal:(bool)arg1;
- (void)setTimestampVal:(unsigned int)arg1;
- (void)setTimezone:(id)arg1;
- (double)timeStamp;
- (id)timeZone;
- (unsigned int)timestampVal;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
