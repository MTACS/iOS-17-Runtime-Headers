
@interface TVRMSConnectToServiceMessage : PBCodable <NSCopying> {
    NSString * _pairingGUID;
    TVRMSServiceMessage * _service;
}

@property (nonatomic, readonly) bool hasPairingGUID;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic, retain) NSString *pairingGUID;
@property (nonatomic, retain) TVRMSServiceMessage *service;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPairingGUID;
- (bool)hasService;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingGUID;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setPairingGUID:(id)arg1;
- (void)setService:(id)arg1;
- (void)writeTo:(id)arg1;

@end
