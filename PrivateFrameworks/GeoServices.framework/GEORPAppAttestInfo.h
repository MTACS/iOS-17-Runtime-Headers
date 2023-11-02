
@interface GEORPAppAttestInfo : PBCodable <NSCopying> {
    NSString * _anonymousUserId;
    NSData * _assertion;
    NSData * _attestation;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_anonymousUserId : 1; 
        unsigned int read_assertion : 1; 
        unsigned int read_attestation : 1; 
        unsigned int read_keyId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _keyId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *anonymousUserId;
@property (nonatomic, retain) NSData *assertion;
@property (nonatomic, retain) NSData *attestation;
@property (nonatomic, readonly) bool hasAnonymousUserId;
@property (nonatomic, readonly) bool hasAssertion;
@property (nonatomic, readonly) bool hasAttestation;
@property (nonatomic, readonly) bool hasKeyId;
@property (nonatomic, retain) NSString *keyId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)anonymousUserId;
- (id)assertion;
- (id)attestation;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnonymousUserId;
- (bool)hasAssertion;
- (bool)hasAttestation;
- (bool)hasKeyId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)keyId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymousUserId:(id)arg1;
- (void)setAssertion:(id)arg1;
- (void)setAttestation:(id)arg1;
- (void)setKeyId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
