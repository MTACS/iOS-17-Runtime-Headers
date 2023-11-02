
@interface ATXPBAVRouteInfo : PBCodable <NSCopying> {
    NSString * _deviceID;
    NSString * _deviceName;
    struct { 
        unsigned int isExternalRoute : 1; 
    }  _has;
    bool  _isExternalRoute;
}

@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) bool hasDeviceID;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic) bool hasIsExternalRoute;
@property (nonatomic) bool isExternalRoute;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasDeviceID;
- (bool)hasDeviceName;
- (bool)hasIsExternalRoute;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExternalRoute;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasIsExternalRoute:(bool)arg1;
- (void)setIsExternalRoute:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
