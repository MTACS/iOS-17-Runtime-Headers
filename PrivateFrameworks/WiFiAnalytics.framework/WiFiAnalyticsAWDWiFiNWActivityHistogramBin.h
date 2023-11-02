
@interface WiFiAnalyticsAWDWiFiNWActivityHistogramBin : PBCodable <NSCopying> {
    NSString * _bin;
    struct { 
        unsigned int hits : 1; 
    }  _has;
    unsigned long long  _hits;
}

@property (nonatomic, retain) NSString *bin;
@property (nonatomic, readonly) bool hasBin;
@property (nonatomic) bool hasHits;
@property (nonatomic) unsigned long long hits;

- (void).cxx_destruct;
- (id)bin;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBin;
- (bool)hasHits;
- (unsigned long long)hash;
- (unsigned long long)hits;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBin:(id)arg1;
- (void)setHasHits:(bool)arg1;
- (void)setHits:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
