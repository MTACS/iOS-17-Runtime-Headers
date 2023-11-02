
@interface GEOABAssignmentRequest : PBRequest <NSCopying> {
    GEOPDClientMetadata * _clientMetadata;
    struct { 
        unsigned int has_requestType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_guid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _guid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasClientMetadata;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasGuid;
- (bool)hasRequestType;
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
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setClientMetadata:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
