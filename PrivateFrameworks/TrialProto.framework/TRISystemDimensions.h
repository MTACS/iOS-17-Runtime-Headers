
@interface TRISystemDimensions : PBCodable <NSCopying> {
    NSString * _aneVersion;
    NSString * _carrierBundleIdentifier;
    NSString * _carrierCountryIsoCode;
    NSString * _deviceClass;
    bool  _experimentOptOutStatus;
    struct { 
        unsigned int targetedPopulation : 1; 
        unsigned int experimentOptOutStatus : 1; 
        unsigned int isAutomatedTestDevice : 1; 
        unsigned int isBetaUser : 1; 
        unsigned int isInternalBuild : 1; 
    }  _has;
    bool  _isAutomatedTestDevice;
    bool  _isBetaUser;
    bool  _isInternalBuild;
    NSString * _osBuild;
    int  _targetedPopulation;
    NSMutableArray * _userKeyboardEnabledInputModeIdentifiers;
    NSString * _userSettingsBcp47DeviceLocale;
    NSString * _userSettingsLanguageCode;
    NSString * _userSettingsRegionCode;
    NSString * _versionTag;
}

@property (nonatomic, retain) NSString *aneVersion;
@property (nonatomic, retain) NSString *carrierBundleIdentifier;
@property (nonatomic, retain) NSString *carrierCountryIsoCode;
@property (nonatomic, retain) NSString *deviceClass;
@property (nonatomic) bool experimentOptOutStatus;
@property (nonatomic, readonly) bool hasAneVersion;
@property (nonatomic, readonly) bool hasCarrierBundleIdentifier;
@property (nonatomic, readonly) bool hasCarrierCountryIsoCode;
@property (nonatomic, readonly) bool hasDeviceClass;
@property (nonatomic) bool hasExperimentOptOutStatus;
@property (nonatomic) bool hasIsAutomatedTestDevice;
@property (nonatomic) bool hasIsBetaUser;
@property (nonatomic) bool hasIsInternalBuild;
@property (nonatomic, readonly) bool hasOsBuild;
@property (nonatomic) bool hasTargetedPopulation;
@property (nonatomic, readonly) bool hasUserSettingsBcp47DeviceLocale;
@property (nonatomic, readonly) bool hasUserSettingsLanguageCode;
@property (nonatomic, readonly) bool hasUserSettingsRegionCode;
@property (nonatomic, readonly) bool hasVersionTag;
@property (nonatomic) bool isAutomatedTestDevice;
@property (nonatomic) bool isBetaUser;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic, retain) NSString *osBuild;
@property (nonatomic) int targetedPopulation;
@property (nonatomic, retain) NSMutableArray *userKeyboardEnabledInputModeIdentifiers;
@property (nonatomic, retain) NSString *userSettingsBcp47DeviceLocale;
@property (nonatomic, retain) NSString *userSettingsLanguageCode;
@property (nonatomic, retain) NSString *userSettingsRegionCode;
@property (nonatomic, retain) NSString *versionTag;

// Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto

+ (Class)userKeyboardEnabledInputModeIdentifiersType;

- (void).cxx_destruct;
- (int)StringAsTargetedPopulation:(id)arg1;
- (void)addUserKeyboardEnabledInputModeIdentifiers:(id)arg1;
- (id)aneVersion;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (void)clearUserKeyboardEnabledInputModeIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceClass;
- (id)dictionaryRepresentation;
- (bool)experimentOptOutStatus;
- (bool)hasAneVersion;
- (bool)hasCarrierBundleIdentifier;
- (bool)hasCarrierCountryIsoCode;
- (bool)hasDeviceClass;
- (bool)hasExperimentOptOutStatus;
- (bool)hasIsAutomatedTestDevice;
- (bool)hasIsBetaUser;
- (bool)hasIsInternalBuild;
- (bool)hasOsBuild;
- (bool)hasTargetedPopulation;
- (bool)hasUserSettingsBcp47DeviceLocale;
- (bool)hasUserSettingsLanguageCode;
- (bool)hasUserSettingsRegionCode;
- (bool)hasVersionTag;
- (unsigned long long)hash;
- (bool)isAutomatedTestDevice;
- (bool)isBetaUser;
- (bool)isEqual:(id)arg1;
- (bool)isInternalBuild;
- (void)mergeFrom:(id)arg1;
- (id)osBuild;
- (bool)readFrom:(id)arg1;
- (void)setAneVersion:(id)arg1;
- (void)setCarrierBundleIdentifier:(id)arg1;
- (void)setCarrierCountryIsoCode:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setExperimentOptOutStatus:(bool)arg1;
- (void)setHasExperimentOptOutStatus:(bool)arg1;
- (void)setHasIsAutomatedTestDevice:(bool)arg1;
- (void)setHasIsBetaUser:(bool)arg1;
- (void)setHasIsInternalBuild:(bool)arg1;
- (void)setHasTargetedPopulation:(bool)arg1;
- (void)setIsAutomatedTestDevice:(bool)arg1;
- (void)setIsBetaUser:(bool)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setTargetedPopulation:(int)arg1;
- (void)setUserKeyboardEnabledInputModeIdentifiers:(id)arg1;
- (void)setUserSettingsBcp47DeviceLocale:(id)arg1;
- (void)setUserSettingsLanguageCode:(id)arg1;
- (void)setUserSettingsRegionCode:(id)arg1;
- (void)setVersionTag:(id)arg1;
- (int)targetedPopulation;
- (id)targetedPopulationAsString:(int)arg1;
- (id)userKeyboardEnabledInputModeIdentifiers;
- (id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;
- (id)userSettingsBcp47DeviceLocale;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;
- (id)versionTag;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)systemDimensions;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (id)fullSystemDimensions:(id)arg1;

@end
