
@interface GEOLogMsgEventWifiConnectionQualityProbe : PBCodable <NSCopying> {
    GEOWiFiConnectionQuality * _wifiConnectionQuality;
}

@property (nonatomic, readonly) bool hasWifiConnectionQuality;
@property (nonatomic, retain) GEOWiFiConnectionQuality *wifiConnectionQuality;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasWifiConnectionQuality;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWifiConnectionQuality:(id)arg1;
- (id)wifiConnectionQuality;
- (void)writeTo:(id)arg1;

@end
