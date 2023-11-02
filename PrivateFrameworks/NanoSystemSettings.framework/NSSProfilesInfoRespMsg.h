
@interface NSSProfilesInfoRespMsg : PBCodable <NSCopying> {
    NSMutableArray * _configProfiles;
    NSData * _managedAppsData;
    NSSProfilesInfoRespMsgProfileInfo * _mdmProfile;
    NSData * _rmAccountData;
}

@property (nonatomic, retain) NSMutableArray *configProfiles;
@property (nonatomic, readonly) bool hasManagedAppsData;
@property (nonatomic, readonly) bool hasMdmProfile;
@property (nonatomic, readonly) bool hasRmAccountData;
@property (nonatomic, retain) NSData *managedAppsData;
@property (nonatomic, retain) NSSProfilesInfoRespMsgProfileInfo *mdmProfile;
@property (nonatomic, retain) NSData *rmAccountData;

+ (Class)configProfileType;

- (void).cxx_destruct;
- (void)addConfigProfile:(id)arg1;
- (void)clearConfigProfiles;
- (id)configProfileAtIndex:(unsigned long long)arg1;
- (id)configProfiles;
- (unsigned long long)configProfilesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasManagedAppsData;
- (bool)hasMdmProfile;
- (bool)hasRmAccountData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)managedAppsData;
- (id)mdmProfile;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rmAccountData;
- (void)setConfigProfiles:(id)arg1;
- (void)setManagedAppsData:(id)arg1;
- (void)setMdmProfile:(id)arg1;
- (void)setRmAccountData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
