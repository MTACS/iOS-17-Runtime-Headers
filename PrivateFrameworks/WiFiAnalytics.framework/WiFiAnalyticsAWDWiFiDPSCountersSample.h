
@interface WiFiAnalyticsAWDWiFiDPSCountersSample : PBCodable <NSCopying> {
    WiFiAnalyticsAWDWiFiNWActivityControllerStats * _controllerStats;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    WiFiAnalyticsAWDWiFiNWActivityPeerStats * _peerStats;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityControllerStats *controllerStats;
@property (nonatomic, readonly) bool hasControllerStats;
@property (nonatomic, readonly) bool hasPeerStats;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityPeerStats *peerStats;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)controllerStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasControllerStats;
- (bool)hasPeerStats;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerStats;
- (bool)readFrom:(id)arg1;
- (void)setControllerStats:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPeerStats:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
