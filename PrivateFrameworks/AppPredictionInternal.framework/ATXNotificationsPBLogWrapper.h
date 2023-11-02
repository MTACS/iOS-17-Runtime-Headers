
@interface ATXNotificationsPBLogWrapper : PBCodable <NSCopying> {
    ATXNotificationsPBGradedRecord * _grecord;
    ATXNotificationsPBPeriodicLog * _periodiclog;
    ATXNotificationsPBRecord * _record;
    ATXNotificationsPBResponse * _response;
    ATXNotificationsPBSettingLog * _settinglog;
}

@property (nonatomic, retain) ATXNotificationsPBGradedRecord *grecord;
@property (nonatomic, readonly) bool hasGrecord;
@property (nonatomic, readonly) bool hasPeriodiclog;
@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasSettinglog;
@property (nonatomic, retain) ATXNotificationsPBPeriodicLog *periodiclog;
@property (nonatomic, retain) ATXNotificationsPBRecord *record;
@property (nonatomic, retain) ATXNotificationsPBResponse *response;
@property (nonatomic, retain) ATXNotificationsPBSettingLog *settinglog;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)grecord;
- (bool)hasGrecord;
- (bool)hasPeriodiclog;
- (bool)hasRecord;
- (bool)hasResponse;
- (bool)hasSettinglog;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)periodiclog;
- (bool)readFrom:(id)arg1;
- (id)record;
- (id)response;
- (void)setGrecord:(id)arg1;
- (void)setPeriodiclog:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSettinglog:(id)arg1;
- (id)settinglog;
- (void)writeTo:(id)arg1;

@end
