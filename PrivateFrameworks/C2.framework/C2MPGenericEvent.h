
@interface C2MPGenericEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestampEnd : 1; 
        unsigned int timestampStart : 1; 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _metrics;
    NSString * _name;
    unsigned long long  _timestampEnd;
    unsigned long long  _timestampStart;
    int  _type;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasTimestampEnd;
@property (nonatomic) bool hasTimestampStart;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *metrics;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long timestampEnd;
@property (nonatomic) unsigned long long timestampStart;
@property (nonatomic) int type;

+ (Class)metricType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addMetric:(id)arg1;
- (void)clearMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasTimestampEnd;
- (bool)hasTimestampStart;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metricAtIndex:(unsigned long long)arg1;
- (id)metrics;
- (unsigned long long)metricsCount;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestampEnd:(bool)arg1;
- (void)setHasTimestampStart:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTimestampEnd:(unsigned long long)arg1;
- (void)setTimestampStart:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestampEnd;
- (unsigned long long)timestampStart;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
