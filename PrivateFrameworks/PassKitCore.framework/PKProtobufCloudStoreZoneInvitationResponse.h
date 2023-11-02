
@interface PKProtobufCloudStoreZoneInvitationResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    PKProtobufCloudStoreZoneInvitation * _invitation;
    unsigned int  _status;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasInvitation;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) PKProtobufCloudStoreZoneInvitation *invitation;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitation;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)invitation;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setInvitation:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
