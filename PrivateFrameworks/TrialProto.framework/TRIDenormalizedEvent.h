
@interface TRIDenormalizedEvent : PBCodable <NSCopying> {
    NSMutableArray * _metrics;
    TRIMLRuntimeDimensions * _mlruntimeDimensions;
    TRISubject * _subject;
    TRISystemDimensions * _systemDimensions;
    NSMutableArray * _treatments;
    TRITrialSystemTelemetry * _trialSystemTelemetry;
    NSMutableArray * _userDimensions;
}

@property (nonatomic, readonly) bool hasMlruntimeDimensions;
@property (nonatomic, readonly) bool hasSubject;
@property (nonatomic, readonly) bool hasSystemDimensions;
@property (nonatomic, readonly) bool hasTrialSystemTelemetry;
@property (nonatomic, retain) NSMutableArray *metrics;
@property (nonatomic, retain) TRIMLRuntimeDimensions *mlruntimeDimensions;
@property (nonatomic, retain) TRISubject *subject;
@property (nonatomic, retain) TRISystemDimensions *systemDimensions;
@property (nonatomic, retain) NSMutableArray *treatments;
@property (nonatomic, retain) TRITrialSystemTelemetry *trialSystemTelemetry;
@property (nonatomic, retain) NSMutableArray *userDimensions;

+ (Class)metricType;
+ (Class)treatmentType;
+ (Class)userDimensionType;

- (void).cxx_destruct;
- (void)addMetric:(id)arg1;
- (void)addTreatment:(id)arg1;
- (void)addUserDimension:(id)arg1;
- (void)clearMetrics;
- (void)clearTreatments;
- (void)clearUserDimensions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMlruntimeDimensions;
- (bool)hasSubject;
- (bool)hasSystemDimensions;
- (bool)hasTrialSystemTelemetry;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metricAtIndex:(unsigned long long)arg1;
- (id)metrics;
- (unsigned long long)metricsCount;
- (id)mlruntimeDimensions;
- (bool)readFrom:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setMlruntimeDimensions:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSystemDimensions:(id)arg1;
- (void)setTreatments:(id)arg1;
- (void)setTrialSystemTelemetry:(id)arg1;
- (void)setUserDimensions:(id)arg1;
- (id)subject;
- (id)systemDimensions;
- (id)treatmentAtIndex:(unsigned long long)arg1;
- (id)treatments;
- (unsigned long long)treatmentsCount;
- (id)trialSystemTelemetry;
- (id)userDimensionAtIndex:(unsigned long long)arg1;
- (id)userDimensions;
- (unsigned long long)userDimensionsCount;
- (void)writeTo:(id)arg1;

@end
