
@interface BLTPBSetNotificationsCriticalAlertRequest : PBRequest <NSCopying> {
    int  _criticalAlertSetting;
    struct { 
        unsigned int criticalAlertSetting : 1; 
    }  _has;
    NSString * _sectionID;
}

@property (nonatomic) int criticalAlertSetting;
@property (nonatomic) bool hasCriticalAlertSetting;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic, retain) NSString *sectionID;

- (void).cxx_destruct;
- (int)StringAsCriticalAlertSetting:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)criticalAlertSetting;
- (id)criticalAlertSettingAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCriticalAlertSetting;
- (bool)hasSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setCriticalAlertSetting:(int)arg1;
- (void)setHasCriticalAlertSetting:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
