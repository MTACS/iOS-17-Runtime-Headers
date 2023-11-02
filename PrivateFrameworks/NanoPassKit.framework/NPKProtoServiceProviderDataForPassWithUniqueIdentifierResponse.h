
@interface NPKProtoServiceProviderDataForPassWithUniqueIdentifierResponse : PBCodable <NSCopying> {
    bool  _encrypted;
    NSData * _errorData;
    struct { 
        unsigned int encrypted : 1; 
    }  _has;
    NSData * _serviceProviderData;
}

@property (nonatomic) bool encrypted;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic) bool hasEncrypted;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasServiceProviderData;
@property (nonatomic, retain) NSData *serviceProviderData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)encrypted;
- (id)errorData;
- (bool)hasEncrypted;
- (bool)hasErrorData;
- (bool)hasServiceProviderData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceProviderData;
- (void)setEncrypted:(bool)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasEncrypted:(bool)arg1;
- (void)setServiceProviderData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
