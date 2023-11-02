
@interface NPKProtoPaymentWebServiceRegistrationResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int registrationResult : 1; 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
    unsigned int  _registrationResult;
    NSData * _webServiceContextData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasRegistrationResult;
@property (nonatomic, readonly) bool hasWebServiceContextData;
@property (nonatomic) bool pending;
@property (nonatomic) unsigned int registrationResult;
@property (nonatomic, retain) NSData *webServiceContextData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPending;
- (bool)hasRegistrationResult;
- (bool)hasWebServiceContextData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (unsigned int)registrationResult;
- (void)setErrorData:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasRegistrationResult:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setRegistrationResult:(unsigned int)arg1;
- (void)setWebServiceContextData:(id)arg1;
- (id)webServiceContextData;
- (void)writeTo:(id)arg1;

@end
