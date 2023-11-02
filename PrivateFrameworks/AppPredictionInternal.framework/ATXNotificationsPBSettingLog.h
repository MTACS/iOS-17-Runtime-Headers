
@interface ATXNotificationsPBSettingLog : PBCodable <NSCopying> {
    ATXNotificationsPBAggregateData * _aggregate;
    ATXNotificationsPBSetting * _setting;
    ATXNotificationsPBUsageData * _usage;
}

@property (nonatomic, retain) ATXNotificationsPBAggregateData *aggregate;
@property (nonatomic, readonly) bool hasAggregate;
@property (nonatomic, readonly) bool hasSetting;
@property (nonatomic, readonly) bool hasUsage;
@property (nonatomic, retain) ATXNotificationsPBSetting *setting;
@property (nonatomic, retain) ATXNotificationsPBUsageData *usage;

- (void).cxx_destruct;
- (id)aggregate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAggregate;
- (bool)hasSetting;
- (bool)hasUsage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggregate:(id)arg1;
- (void)setSetting:(id)arg1;
- (void)setUsage:(id)arg1;
- (id)setting;
- (id)usage;
- (void)writeTo:(id)arg1;

@end
