
@interface BLTPBSetRemoteGlobalSettingsRequest : PBRequest <NSCopying> {
    unsigned long long  _globalScheduledDeliverySetting;
    struct { 
        unsigned int globalScheduledDeliverySetting : 1; 
        unsigned int settingDate : 1; 
    }  _has;
    double  _settingDate;
}

@property (nonatomic) unsigned long long globalScheduledDeliverySetting;
@property (nonatomic) bool hasGlobalScheduledDeliverySetting;
@property (nonatomic) bool hasSettingDate;
@property (nonatomic) double settingDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)globalScheduledDeliverySetting;
- (bool)hasGlobalScheduledDeliverySetting;
- (bool)hasSettingDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGlobalScheduledDeliverySetting:(unsigned long long)arg1;
- (void)setHasGlobalScheduledDeliverySetting:(bool)arg1;
- (void)setHasSettingDate:(bool)arg1;
- (void)setSettingDate:(double)arg1;
- (double)settingDate;
- (void)writeTo:(id)arg1;

@end
