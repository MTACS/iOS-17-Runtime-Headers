
@interface AWDWiFiMetricScanStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _scanStats;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *scanStats;
@property (nonatomic) unsigned long long timestamp;

+ (Class)scanStatsType;

- (void)addScanStats:(id)arg1;
- (void)clearScanStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scanStats;
- (id)scanStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)scanStatsCount;
- (void)setHasTimestamp:(bool)arg1;
- (void)setScanStats:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
