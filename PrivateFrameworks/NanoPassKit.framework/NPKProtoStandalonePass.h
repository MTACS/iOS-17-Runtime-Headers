
@interface NPKProtoStandalonePass : PBCodable <NSCopying> {
    NSString * _deviceName;
    struct { 
        unsigned int passType : 1; 
        unsigned int remotePass : 1; 
    }  _has;
    NSData * _imageData;
    NSString * _localizedDescription;
    NSString * _localizedName;
    NSString * _organizationName;
    int  _passType;
    NSString * _passTypeIdentifier;
    bool  _remotePass;
    NSString * _serialNumber;
    NSMutableArray * _userInfos;
}

@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, readonly) bool hasLocalizedDescription;
@property (nonatomic, readonly) bool hasLocalizedName;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic) bool hasPassType;
@property (nonatomic, readonly) bool hasPassTypeIdentifier;
@property (nonatomic) bool hasRemotePass;
@property (nonatomic, readonly) bool hasSerialNumber;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic) int passType;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic) bool remotePass;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) NSMutableArray *userInfos;

+ (Class)userInfosType;

- (void).cxx_destruct;
- (int)StringAsPassType:(id)arg1;
- (void)addUserInfos:(id)arg1;
- (void)clearUserInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasDeviceName;
- (bool)hasImageData;
- (bool)hasLocalizedDescription;
- (bool)hasLocalizedName;
- (bool)hasOrganizationName;
- (bool)hasPassType;
- (bool)hasPassTypeIdentifier;
- (bool)hasRemotePass;
- (bool)hasSerialNumber;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedName;
- (void)mergeFrom:(id)arg1;
- (id)organizationName;
- (int)passType;
- (id)passTypeAsString:(int)arg1;
- (id)passTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (bool)remotePass;
- (id)serialNumber;
- (void)setDeviceName:(id)arg1;
- (void)setHasPassType:(bool)arg1;
- (void)setHasRemotePass:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPassType:(int)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setRemotePass:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUserInfos:(id)arg1;
- (id)userInfos;
- (id)userInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)writeTo:(id)arg1;

@end
