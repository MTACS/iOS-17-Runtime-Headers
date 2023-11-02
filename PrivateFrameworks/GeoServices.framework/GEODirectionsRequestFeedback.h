
@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {
    NSString * _appIdentifier;
    struct { 
        unsigned int has_purpose : 1; 
        unsigned int has_source : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_appIdentifier : 1; 
        unsigned int read_requestingAppId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _purpose;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _requestingAppId;
    int  _source;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic) bool hasPurpose;
@property (nonatomic, readonly) bool hasRequestingAppId;
@property (nonatomic) bool hasSource;
@property (nonatomic) int purpose;
@property (nonatomic, retain) NSString *requestingAppId;
@property (nonatomic) int source;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPurpose:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (id)appIdentifier;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppIdentifier;
- (bool)hasPurpose;
- (bool)hasRequestingAppId;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithPurpose:(int)arg1;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)purpose;
- (id)purposeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestingAppId;
- (void)setAppIdentifier:(id)arg1;
- (void)setHasPurpose:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setPurpose:(int)arg1;
- (void)setRequestingAppId:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
