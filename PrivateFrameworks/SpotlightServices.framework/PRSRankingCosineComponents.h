
@interface PRSRankingCosineComponents : NSObject {
    unsigned long long  _fieldLength;
    NSArray * _inverseDocFrequencies;
    NSArray * _termFrequencies;
    NSArray * _termFrequenciesWeighted;
    NSArray * _termInverseDoc;
    NSArray * _termInverseDocWeighted;
}

@property (nonatomic) unsigned long long fieldLength;
@property (nonatomic, retain) NSArray *inverseDocFrequencies;
@property (nonatomic, retain) NSArray *termFrequencies;
@property (nonatomic, retain) NSArray *termFrequenciesWeighted;
@property (nonatomic, retain) NSArray *termInverseDoc;
@property (nonatomic, retain) NSArray *termInverseDocWeighted;

- (void).cxx_destruct;
- (unsigned long long)fieldLength;
- (id)inverseDocFrequencies;
- (void)setFieldLength:(unsigned long long)arg1;
- (void)setInverseDocFrequencies:(id)arg1;
- (void)setTermFrequencies:(id)arg1;
- (void)setTermFrequenciesWeighted:(id)arg1;
- (void)setTermInverseDoc:(id)arg1;
- (void)setTermInverseDocWeighted:(id)arg1;
- (id)termFrequencies;
- (id)termFrequenciesWeighted;
- (id)termInverseDoc;
- (id)termInverseDocWeighted;

@end
