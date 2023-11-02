
@interface NSSInstallProfileReqMsg : PBCodable <NSCopying> {
    NSData * _profileData;
}

@property (nonatomic, readonly) bool hasProfileData;
@property (nonatomic, retain) NSData *profileData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProfileData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)profileData;
- (bool)readFrom:(id)arg1;
- (void)setProfileData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
