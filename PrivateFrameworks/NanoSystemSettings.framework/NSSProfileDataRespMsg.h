
@interface NSSProfileDataRespMsg : PBCodable <NSCopying> {
    NSData * _profileData;
    NSData * _profilePayloadsSummary;
    NSData * _rmConfigurationViewModels;
}

@property (nonatomic, readonly) bool hasProfileData;
@property (nonatomic, readonly) bool hasProfilePayloadsSummary;
@property (nonatomic, readonly) bool hasRmConfigurationViewModels;
@property (nonatomic, retain) NSData *profileData;
@property (nonatomic, retain) NSData *profilePayloadsSummary;
@property (nonatomic, retain) NSData *rmConfigurationViewModels;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProfileData;
- (bool)hasProfilePayloadsSummary;
- (bool)hasRmConfigurationViewModels;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)profileData;
- (id)profilePayloadsSummary;
- (bool)readFrom:(id)arg1;
- (id)rmConfigurationViewModels;
- (void)setProfileData:(id)arg1;
- (void)setProfilePayloadsSummary:(id)arg1;
- (void)setRmConfigurationViewModels:(id)arg1;
- (void)writeTo:(id)arg1;

@end
