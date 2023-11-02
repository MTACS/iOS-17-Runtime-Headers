
@interface NSSProfilesInfoRespMsgProfileInfo : PBCodable <NSCopying> {
    NSData * _expiryDate;
    NSString * _friendlyName;
    struct { 
        unsigned int isInstalledByDeclarativeManagement : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isInstalledByDeclarativeManagement;
    NSString * _organization;
    NSString * _profileDescription;
    NSString * _uUID;
}

@property (nonatomic, retain) NSData *expiryDate;
@property (nonatomic, retain) NSString *friendlyName;
@property (nonatomic, readonly) bool hasExpiryDate;
@property (nonatomic, readonly) bool hasFriendlyName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsInstalledByDeclarativeManagement;
@property (nonatomic, readonly) bool hasOrganization;
@property (nonatomic, readonly) bool hasProfileDescription;
@property (nonatomic, readonly) bool hasUUID;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isInstalledByDeclarativeManagement;
@property (nonatomic, retain) NSString *organization;
@property (nonatomic, retain) NSString *profileDescription;
@property (nonatomic, retain) NSString *uUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expiryDate;
- (id)friendlyName;
- (bool)hasExpiryDate;
- (bool)hasFriendlyName;
- (bool)hasIdentifier;
- (bool)hasIsInstalledByDeclarativeManagement;
- (bool)hasOrganization;
- (bool)hasProfileDescription;
- (bool)hasUUID;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isInstalledByDeclarativeManagement;
- (void)mergeFrom:(id)arg1;
- (id)organization;
- (id)profileDescription;
- (bool)readFrom:(id)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setHasIsInstalledByDeclarativeManagement:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsInstalledByDeclarativeManagement:(bool)arg1;
- (void)setOrganization:(id)arg1;
- (void)setProfileDescription:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)uUID;
- (void)writeTo:(id)arg1;

@end
