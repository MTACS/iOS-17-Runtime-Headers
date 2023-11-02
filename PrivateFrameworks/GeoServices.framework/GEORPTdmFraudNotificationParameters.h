
@interface GEORPTdmFraudNotificationParameters : PBCodable <NSCopying> {
    NSString * _anonymousId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_anonymousId : 1; 
        unsigned int read_fsrData : 1; 
        unsigned int read_tdmNamespace : 1; 
        unsigned int read_token : 1; 
        unsigned int read_transactionId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _fsrData;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _tdmNamespace;
    NSString * _token;
    NSString * _transactionId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *anonymousId;
@property (nonatomic, retain) NSString *fsrData;
@property (nonatomic, readonly) bool hasAnonymousId;
@property (nonatomic, readonly) bool hasFsrData;
@property (nonatomic, readonly) bool hasTdmNamespace;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, readonly) bool hasTransactionId;
@property (nonatomic, retain) NSString *tdmNamespace;
@property (nonatomic, retain) NSString *token;
@property (nonatomic, retain) NSString *transactionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)anonymousId;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fsrData;
- (bool)hasAnonymousId;
- (bool)hasFsrData;
- (bool)hasTdmNamespace;
- (bool)hasToken;
- (bool)hasTransactionId;
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
- (void)setAnonymousId:(id)arg1;
- (void)setFsrData:(id)arg1;
- (void)setTdmNamespace:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTransactionId:(id)arg1;
- (id)tdmNamespace;
- (id)token;
- (id)transactionId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
