
@interface DESSystemTelemetryResponse : PBCodable <NSCopying> {
    unsigned long long  _createTimeUtc;
    NSString * _deviceLocale;
    NSString * _deviceOs;
    NSString * _deviceType;
    struct { 
        unsigned int createTimeUtc : 1; 
        unsigned int recordCount : 1; 
    }  _has;
    NSString * _plugin;
    unsigned long long  _recordCount;
}

@property (nonatomic) unsigned long long createTimeUtc;
@property (nonatomic, retain) NSString *deviceLocale;
@property (nonatomic, retain) NSString *deviceOs;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic) bool hasCreateTimeUtc;
@property (nonatomic, readonly) bool hasDeviceLocale;
@property (nonatomic, readonly) bool hasDeviceOs;
@property (nonatomic, readonly) bool hasDeviceType;
@property (nonatomic, readonly) bool hasPlugin;
@property (nonatomic) bool hasRecordCount;
@property (nonatomic, retain) NSString *plugin;
@property (nonatomic) unsigned long long recordCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)createTimeUtc;
- (id)description;
- (id)deviceLocale;
- (id)deviceOs;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (bool)hasCreateTimeUtc;
- (bool)hasDeviceLocale;
- (bool)hasDeviceOs;
- (bool)hasDeviceType;
- (bool)hasPlugin;
- (bool)hasRecordCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)plugin;
- (bool)readFrom:(id)arg1;
- (unsigned long long)recordCount;
- (void)setCreateTimeUtc:(unsigned long long)arg1;
- (void)setDeviceLocale:(id)arg1;
- (void)setDeviceOs:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setHasCreateTimeUtc:(bool)arg1;
- (void)setHasRecordCount:(bool)arg1;
- (void)setPlugin:(id)arg1;
- (void)setRecordCount:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
