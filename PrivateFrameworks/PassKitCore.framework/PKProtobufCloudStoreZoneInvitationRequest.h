
@interface PKProtobufCloudStoreZoneInvitationRequest : PBRequest <NSCopying> {
    unsigned int  _errorCode;
    NSString * _errorDescription;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    PKProtobufCloudStoreZoneInvitation * _invitation;
    unsigned int  _version;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasInvitation;
@property (nonatomic, retain) PKProtobufCloudStoreZoneInvitation *invitation;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)errorDescription;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (bool)hasErrorDomain;
- (bool)hasInvitation;
- (unsigned long long)hash;
- (id)invitation;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setInvitation:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
