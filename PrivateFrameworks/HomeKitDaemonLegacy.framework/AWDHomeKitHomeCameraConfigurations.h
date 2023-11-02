
@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying> {
    unsigned int  _enabledResidentsDeviceCapabilities;
    struct { 
        unsigned int enabledResidentsDeviceCapabilities : 1; 
        unsigned int isFaceClassificationEnabled : 1; 
        unsigned int isOwner : 1; 
    }  _has;
    NSMutableArray * _homeKitCameraSettings;
    NSMutableArray * _homeKitCameraUserSettings;
    bool  _isFaceClassificationEnabled;
    bool  _isOwner;
}

@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities;
@property (nonatomic) bool hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) bool hasIsFaceClassificationEnabled;
@property (nonatomic) bool hasIsOwner;
@property (nonatomic, retain) NSMutableArray *homeKitCameraSettings;
@property (nonatomic, retain) NSMutableArray *homeKitCameraUserSettings;
@property (nonatomic) bool isFaceClassificationEnabled;
@property (nonatomic) bool isOwner;

+ (Class)homeKitCameraSettingsType;
+ (Class)homeKitCameraUserSettingsType;

- (void).cxx_destruct;
- (void)addHomeKitCameraSettings:(id)arg1;
- (void)addHomeKitCameraUserSettings:(id)arg1;
- (void)clearHomeKitCameraSettings;
- (void)clearHomeKitCameraUserSettings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enabledResidentsDeviceCapabilities;
- (bool)hasEnabledResidentsDeviceCapabilities;
- (bool)hasIsFaceClassificationEnabled;
- (bool)hasIsOwner;
- (unsigned long long)hash;
- (id)homeKitCameraSettings;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitCameraSettingsCount;
- (id)homeKitCameraUserSettings;
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitCameraUserSettingsCount;
- (bool)isEqual:(id)arg1;
- (bool)isFaceClassificationEnabled;
- (bool)isOwner;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabledResidentsDeviceCapabilities:(unsigned int)arg1;
- (void)setHasEnabledResidentsDeviceCapabilities:(bool)arg1;
- (void)setHasIsFaceClassificationEnabled:(bool)arg1;
- (void)setHasIsOwner:(bool)arg1;
- (void)setHomeKitCameraSettings:(id)arg1;
- (void)setHomeKitCameraUserSettings:(id)arg1;
- (void)setIsFaceClassificationEnabled:(bool)arg1;
- (void)setIsOwner:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
