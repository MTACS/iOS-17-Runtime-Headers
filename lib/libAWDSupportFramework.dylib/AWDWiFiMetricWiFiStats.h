
@interface AWDWiFiMetricWiFiStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
    AWDWifiStats * _wifiStats;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasWifiStats;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDWifiStats *wifiStats;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasWifiStats;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiStats:(id)arg1;
- (unsigned long long)timestamp;
- (id)wifiStats;
- (void)writeTo:(id)arg1;

@end
