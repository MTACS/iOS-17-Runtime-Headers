
@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest <NSCopying> {
    NSData * _peerPaymentAccountData;
    NSData * _peerPaymentWebServiceContextData;
}

@property (nonatomic, readonly) bool hasPeerPaymentAccountData;
@property (nonatomic, readonly) bool hasPeerPaymentWebServiceContextData;
@property (nonatomic, retain) NSData *peerPaymentAccountData;
@property (nonatomic, retain) NSData *peerPaymentWebServiceContextData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerPaymentAccountData;
- (bool)hasPeerPaymentWebServiceContextData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerPaymentAccountData;
- (id)peerPaymentWebServiceContextData;
- (bool)readFrom:(id)arg1;
- (void)setPeerPaymentAccountData:(id)arg1;
- (void)setPeerPaymentWebServiceContextData:(id)arg1;
- (void)writeTo:(id)arg1;

@end