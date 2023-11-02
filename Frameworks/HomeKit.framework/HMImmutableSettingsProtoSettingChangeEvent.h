
@interface HMImmutableSettingsProtoSettingChangeEvent : PBCodable <NSCopying> {
    HMImmutableSettingsProtoAvailableLanguageListEvent * _availableLanguages;
    HMImmutableSettingsProtoBoolSettingEvent * _boolSetting;
    HMImmutableSettingsProtoBoundedIntegerSettingEvent * _boundedIntegerSetting;
    struct { 
        unsigned int settingChangeEvent : 1; 
        unsigned int readOnly : 1; 
    }  _has;
    NSString * _keyPath;
    HMImmutableSettingsProtoLanguageSettingEvent * _languageSetting;
    bool  _readOnly;
    int  _settingChangeEvent;
    HMImmutableSettingsProtoStringSettingEvent * _stringSetting;
}

@property (nonatomic, retain) HMImmutableSettingsProtoAvailableLanguageListEvent *availableLanguages;
@property (nonatomic, retain) HMImmutableSettingsProtoBoolSettingEvent *boolSetting;
@property (nonatomic, retain) HMImmutableSettingsProtoBoundedIntegerSettingEvent *boundedIntegerSetting;
@property (nonatomic, readonly) bool hasAvailableLanguages;
@property (nonatomic, readonly) bool hasBoolSetting;
@property (nonatomic, readonly) bool hasBoundedIntegerSetting;
@property (nonatomic, readonly) bool hasKeyPath;
@property (nonatomic, readonly) bool hasLanguageSetting;
@property (nonatomic) bool hasReadOnly;
@property (nonatomic) bool hasSettingChangeEvent;
@property (nonatomic, readonly) bool hasStringSetting;
@property (nonatomic, retain) NSString *keyPath;
@property (nonatomic, retain) HMImmutableSettingsProtoLanguageSettingEvent *languageSetting;
@property (nonatomic) bool readOnly;
@property (nonatomic) int settingChangeEvent;
@property (nonatomic, retain) HMImmutableSettingsProtoStringSettingEvent *stringSetting;

- (void).cxx_destruct;
- (int)StringAsSettingChangeEvent:(id)arg1;
- (id)availableLanguages;
- (id)boolSetting;
- (id)boundedIntegerSetting;
- (void)clearOneofValuesForSettingChangeEvent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvailableLanguages;
- (bool)hasBoolSetting;
- (bool)hasBoundedIntegerSetting;
- (bool)hasKeyPath;
- (bool)hasLanguageSetting;
- (bool)hasReadOnly;
- (bool)hasSettingChangeEvent;
- (bool)hasStringSetting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)languageSetting;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)readOnly;
- (void)setAvailableLanguages:(id)arg1;
- (void)setBoolSetting:(id)arg1;
- (void)setBoundedIntegerSetting:(id)arg1;
- (void)setHasReadOnly:(bool)arg1;
- (void)setHasSettingChangeEvent:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setLanguageSetting:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setSettingChangeEvent:(int)arg1;
- (void)setStringSetting:(id)arg1;
- (int)settingChangeEvent;
- (id)settingChangeEventAsString:(int)arg1;
- (id)stringSetting;
- (void)writeTo:(id)arg1;

@end
