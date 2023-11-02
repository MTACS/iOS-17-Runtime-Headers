
@interface PPSPBMetricHistory : PBCodable <NSCopying> {
    NSMutableArray * _metrics;
}

@property (nonatomic, retain) NSMutableArray *metrics;

+ (Class)metricsType;

- (void).cxx_destruct;
- (void)addMetrics:(id)arg1;
- (void)clearMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metrics;
- (id)metricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)metricsCount;
- (bool)readFrom:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)writeTo:(id)arg1;

@end
