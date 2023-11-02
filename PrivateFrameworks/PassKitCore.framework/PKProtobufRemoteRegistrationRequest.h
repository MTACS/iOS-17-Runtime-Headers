
@interface PKProtobufRemoteRegistrationRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int registerBroker : 1; 
        unsigned int registerPeerPayment : 1; 
    }  _has;
    bool  _registerBroker;
    bool  _registerPeerPayment;
    unsigned int  _version;
}

@property (nonatomic) bool hasRegisterBroker;
@property (nonatomic) bool hasRegisterPeerPayment;
@property (nonatomic) bool registerBroker;
@property (nonatomic) bool registerPeerPayment;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRegisterBroker;
- (bool)hasRegisterPeerPayment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)registerBroker;
- (bool)registerPeerPayment;
- (void)setHasRegisterBroker:(bool)arg1;
- (void)setHasRegisterPeerPayment:(bool)arg1;
- (void)setRegisterBroker:(bool)arg1;
- (void)setRegisterPeerPayment:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
