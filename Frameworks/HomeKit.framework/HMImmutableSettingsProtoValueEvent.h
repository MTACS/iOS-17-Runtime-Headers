
@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying> {
    HMImmutableSettingsProtoBoolValueEvent * _boolValueEvent;
    struct { 
        unsigned int settingValueEvent : 1; 
    }  _has;
    HMImmutableSettingsProtoIntegerValueEvent * _integerValueEvent;
    HMImmutableSettingsProtoLanguageValueEvent * _languageValueEvent;
    int  _settingValueEvent;
    HMImmutableSettingsProtoStringValueEvent * _stringValueEvent;
}

@property (nonatomic, retain) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent;
@property (nonatomic, readonly) bool hasBoolValueEvent;
@property (nonatomic, readonly) bool hasIntegerValueEvent;
@property (nonatomic, readonly) bool hasLanguageValueEvent;
@property (nonatomic) bool hasSettingValueEvent;
@property (nonatomic, readonly) bool hasStringValueEvent;
@property (nonatomic, retain) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent;
@property (nonatomic, retain) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent;
@property (nonatomic) int settingValueEvent;
@property (nonatomic, retain) HMImmutableSettingsProtoStringValueEvent *stringValueEvent;

- (void).cxx_destruct;
- (int)StringAsSettingValueEvent:(id)arg1;
- (id)boolValueEvent;
- (void)clearOneofValuesForSettingValueEvent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoolValueEvent;
- (bool)hasIntegerValueEvent;
- (bool)hasLanguageValueEvent;
- (bool)hasSettingValueEvent;
- (bool)hasStringValueEvent;
- (unsigned long long)hash;
- (id)integerValueEvent;
- (bool)isEqual:(id)arg1;
- (id)languageValueEvent;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValueEvent:(id)arg1;
- (void)setHasSettingValueEvent:(bool)arg1;
- (void)setIntegerValueEvent:(id)arg1;
- (void)setLanguageValueEvent:(id)arg1;
- (void)setSettingValueEvent:(int)arg1;
- (void)setStringValueEvent:(id)arg1;
- (int)settingValueEvent;
- (id)settingValueEventAsString:(int)arg1;
- (id)stringValueEvent;
- (void)writeTo:(id)arg1;

@end
