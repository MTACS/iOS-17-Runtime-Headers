
@interface CKCDPCodeServiceResponseAttestationResponseAttestation : PBCodable <NSCopying> {
    NSData * _appQuote;
    NSData * _aqeQuote;
    NSString * _pckCertificate;
    NSData * _routingToken;
}

@property (nonatomic, retain) NSData *appQuote;
@property (nonatomic, retain) NSData *aqeQuote;
@property (nonatomic, readonly) bool hasAppQuote;
@property (nonatomic, readonly) bool hasAqeQuote;
@property (nonatomic, readonly) bool hasPckCertificate;
@property (nonatomic, readonly) bool hasRoutingToken;
@property (nonatomic, retain) NSString *pckCertificate;
@property (nonatomic, retain) NSData *routingToken;

- (void).cxx_destruct;
- (id)appQuote;
- (id)aqeQuote;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppQuote;
- (bool)hasAqeQuote;
- (bool)hasPckCertificate;
- (bool)hasRoutingToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pckCertificate;
- (bool)readFrom:(id)arg1;
- (id)routingToken;
- (void)setAppQuote:(id)arg1;
- (void)setAqeQuote:(id)arg1;
- (void)setPckCertificate:(id)arg1;
- (void)setRoutingToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
