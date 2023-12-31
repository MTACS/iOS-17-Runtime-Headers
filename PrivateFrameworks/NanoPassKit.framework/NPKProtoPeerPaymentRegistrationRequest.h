
@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest <NSCopying> {
    bool  _forceReRegistration;
    struct { 
        unsigned int forceReRegistration : 1; 
    }  _has;
    NSString * _serviceURL;
}

@property (nonatomic) bool forceReRegistration;
@property (nonatomic) bool hasForceReRegistration;
@property (nonatomic, readonly) bool hasServiceURL;
@property (nonatomic, retain) NSString *serviceURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)forceReRegistration;
- (bool)hasForceReRegistration;
- (bool)hasServiceURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceURL;
- (void)setForceReRegistration:(bool)arg1;
- (void)setHasForceReRegistration:(bool)arg1;
- (void)setServiceURL:(id)arg1;
- (void)writeTo:(id)arg1;

@end
