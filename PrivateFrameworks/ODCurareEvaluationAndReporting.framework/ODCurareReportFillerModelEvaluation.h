
@interface ODCurareReportFillerModelEvaluation : PBCodable <NSCopying> {
    NSString * _metricName;
    double  _metricValue;
    unsigned int  _numberOfPositiveSamples;
    unsigned int  _numberOfSamples;
}

@property (nonatomic, retain) NSString *metricName;
@property (nonatomic) double metricValue;
@property (nonatomic) unsigned int numberOfPositiveSamples;
@property (nonatomic) unsigned int numberOfSamples;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metricName;
- (double)metricValue;
- (unsigned int)numberOfPositiveSamples;
- (unsigned int)numberOfSamples;
- (bool)readFrom:(id)arg1;
- (void)setMetricName:(id)arg1;
- (void)setMetricValue:(double)arg1;
- (void)setNumberOfPositiveSamples:(unsigned int)arg1;
- (void)setNumberOfSamples:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
