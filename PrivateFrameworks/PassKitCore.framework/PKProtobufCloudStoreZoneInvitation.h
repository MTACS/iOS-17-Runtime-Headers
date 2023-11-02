
@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying> {
    NSString * _containerIdentifier;
    double  _dateCreated;
    struct { 
        unsigned int dateCreated : 1; 
    }  _has;
    NSData * _shareInvitationToken;
    NSString * _shareURL;
    unsigned int  _version;
    NSString * _zoneName;
}

@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic) double dateCreated;
@property (nonatomic, readonly) bool hasContainerIdentifier;
@property (nonatomic) bool hasDateCreated;
@property (nonatomic, readonly) bool hasShareInvitationToken;
@property (nonatomic, readonly) bool hasShareURL;
@property (nonatomic, readonly) bool hasZoneName;
@property (nonatomic, retain) NSData *shareInvitationToken;
@property (nonatomic, retain) NSString *shareURL;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSString *zoneName;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateCreated;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerIdentifier;
- (bool)hasDateCreated;
- (bool)hasShareInvitationToken;
- (bool)hasShareURL;
- (bool)hasZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDateCreated:(double)arg1;
- (void)setHasDateCreated:(bool)arg1;
- (void)setShareInvitationToken:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setZoneName:(id)arg1;
- (id)shareInvitationToken;
- (id)shareURL;
- (unsigned int)version;
- (void)writeTo:(id)arg1;
- (id)zoneName;

@end
