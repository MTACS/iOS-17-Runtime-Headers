
@interface PPSPBMetricStream : PBCodable <NSCopying> {
    struct { 
        unsigned int protoVersion : 1; 
    }  _has;
    NSMutableArray * _metricHistorys;
    double  _protoVersion;
}

@property (nonatomic) bool hasProtoVersion;
@property (nonatomic, retain) NSMutableArray *metricHistorys;
@property (nonatomic) double protoVersion;

+ (Class)metricHistoryType;

- (void).cxx_destruct;
- (void)addMetricHistory:(id)arg1;
- (void)clearMetricHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProtoVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metricHistoryAtIndex:(unsigned long long)arg1;
- (id)metricHistorys;
- (unsigned long long)metricHistorysCount;
- (double)protoVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasProtoVersion:(bool)arg1;
- (void)setMetricHistorys:(id)arg1;
- (void)setProtoVersion:(double)arg1;
- (void)writeTo:(id)arg1;

@end
