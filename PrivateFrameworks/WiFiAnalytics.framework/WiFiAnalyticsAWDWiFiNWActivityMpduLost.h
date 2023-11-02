
@interface WiFiAnalyticsAWDWiFiNWActivityMpduLost : PBCodable <NSCopying> {
    WiFiAnalyticsAWDWiFiNWActivityMpduWME * _bALost;
    WiFiAnalyticsAWDWiFiNWActivityMpduWME * _nonBALost;
}

@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityMpduWME *bALost;
@property (nonatomic, readonly) bool hasBALost;
@property (nonatomic, readonly) bool hasNonBALost;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiNWActivityMpduWME *nonBALost;

- (void).cxx_destruct;
- (id)bALost;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBALost;
- (bool)hasNonBALost;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonBALost;
- (bool)readFrom:(id)arg1;
- (void)setBALost:(id)arg1;
- (void)setNonBALost:(id)arg1;
- (void)writeTo:(id)arg1;

@end
