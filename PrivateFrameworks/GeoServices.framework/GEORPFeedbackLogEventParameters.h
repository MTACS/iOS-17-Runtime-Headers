
@interface GEORPFeedbackLogEventParameters : PBCodable <NSCopying> {
    NSString * _clientEventUuid;
    GEORPTimestamp * _createdAt;
    GEORPFeedbackLogEventDetails * _details;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientEventUuid : 1; 
        unsigned int read_createdAt : 1; 
        unsigned int read_details : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *clientEventUuid;
@property (nonatomic, retain) GEORPTimestamp *createdAt;
@property (nonatomic, retain) GEORPFeedbackLogEventDetails *details;
@property (nonatomic, readonly) bool hasClientEventUuid;
@property (nonatomic, readonly) bool hasCreatedAt;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientEventUuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasClientEventUuid;
- (bool)hasCreatedAt;
- (bool)hasDetails;
- (bool)hasType;
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
- (void)setClientEventUuid:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
