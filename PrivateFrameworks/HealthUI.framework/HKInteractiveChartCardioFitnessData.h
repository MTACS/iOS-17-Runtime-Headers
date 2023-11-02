
@interface HKInteractiveChartCardioFitnessData : HKInteractiveChartSinglePointData {
    long long  _age;
    long long  _biologicalSex;
    long long  _classification;
    unsigned long long  _sampleCount;
}

@property (nonatomic) long long age;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long classification;
@property (nonatomic) unsigned long long sampleCount;

- (long long)age;
- (long long)biologicalSex;
- (long long)classification;
- (id)description;
- (unsigned long long)sampleCount;
- (void)setAge:(long long)arg1;
- (void)setBiologicalSex:(long long)arg1;
- (void)setClassification:(long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;

@end
