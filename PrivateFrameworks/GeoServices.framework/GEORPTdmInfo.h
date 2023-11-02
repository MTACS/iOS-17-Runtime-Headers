
@interface GEORPTdmInfo : PBCodable <NSCopying> {
    NSString * _anonymousUserId;
    NSMutableArray * _baaCertificates;
    NSData * _baaSignature;
    struct { 
        unsigned int has_isBlocked : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_anonymousUserId : 1; 
        unsigned int read_baaCertificates : 1; 
        unsigned int read_baaSignature : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isBlocked;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *anonymousUserId;
@property (nonatomic, retain) NSMutableArray *baaCertificates;
@property (nonatomic, retain) NSData *baaSignature;
@property (nonatomic, readonly) bool hasAnonymousUserId;
@property (nonatomic, readonly) bool hasBaaSignature;
@property (nonatomic) bool hasIsBlocked;
@property (nonatomic) bool isBlocked;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)baaCertificatesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addBaaCertificates:(id)arg1;
- (id)anonymousUserId;
- (id)baaCertificates;
- (id)baaCertificatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)baaCertificatesCount;
- (id)baaSignature;
- (void)clearBaaCertificates;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnonymousUserId;
- (bool)hasBaaSignature;
- (bool)hasIsBlocked;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isBlocked;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymousUserId:(id)arg1;
- (void)setBaaCertificates:(id)arg1;
- (void)setBaaSignature:(id)arg1;
- (void)setHasIsBlocked:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
