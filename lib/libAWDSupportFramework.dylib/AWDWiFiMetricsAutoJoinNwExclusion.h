
@interface AWDWiFiMetricsAutoJoinNwExclusion : PBCodable <NSCopying> {
    struct { 
        unsigned int reasonCode : 1; 
        unsigned int rssi : 1; 
        unsigned int usageRank : 1; 
    }  _has;
    unsigned int  _reasonCode;
    int  _rssi;
    unsigned int  _usageRank;
}

@property (nonatomic) bool hasReasonCode;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasUsageRank;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned int usageRank;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReasonCode;
- (bool)hasRssi;
- (bool)hasUsageRank;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reasonCode;
- (int)rssi;
- (void)setHasReasonCode:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasUsageRank:(bool)arg1;
- (void)setReasonCode:(unsigned int)arg1;
- (void)setRssi:(int)arg1;
- (void)setUsageRank:(unsigned int)arg1;
- (unsigned int)usageRank;
- (void)writeTo:(id)arg1;

@end
