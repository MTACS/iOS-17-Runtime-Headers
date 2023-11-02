
@interface MXDeviceInfo : PBCodable <NSCopying> {
    NSString * _deviceName;
    NSString * _deviceVersion;
    NSString * _systemBuild;
    NSString * _systemName;
    NSString * _systemVersion;
}

@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *deviceVersion;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic, readonly) bool hasDeviceVersion;
@property (nonatomic, readonly) bool hasSystemBuild;
@property (nonatomic, readonly) bool hasSystemName;
@property (nonatomic, readonly) bool hasSystemVersion;
@property (nonatomic, retain) NSString *systemBuild;
@property (nonatomic, retain) NSString *systemName;
@property (nonatomic, retain) NSString *systemVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)deviceVersion;
- (id)dictionaryRepresentation;
- (bool)hasDeviceName;
- (bool)hasDeviceVersion;
- (bool)hasSystemBuild;
- (bool)hasSystemName;
- (bool)hasSystemVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceVersion:(id)arg1;
- (void)setSystemBuild:(id)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemBuild;
- (id)systemName;
- (id)systemVersion;
- (void)writeTo:(id)arg1;

@end
