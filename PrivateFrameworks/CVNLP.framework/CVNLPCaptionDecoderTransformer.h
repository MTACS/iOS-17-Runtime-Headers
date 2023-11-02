
@interface CVNLPCaptionDecoderTransformer : CVNLPCaptionDecoder {
    struct CVNLPBeamSearch { } * _beamSearch;
    unsigned long long  _beamSize;
    unsigned long long  _decoderBatchSize;
    NSArray * _decoderBlocks;
    unsigned long long  _endID;
    struct CVNLPBeamSearch { } * _filterBeamSearch;
    unsigned long long  _maxCaptionLen;
    unsigned long long  _outputVocabSize;
    unsigned long long  _startID;
    NSDictionary * _vocab;
    unsigned long long  _vocabSize;
}

@property (nonatomic) struct CVNLPBeamSearch { }*beamSearch;
@property (nonatomic) unsigned long long beamSize;
@property (nonatomic) unsigned long long decoderBatchSize;
@property (nonatomic, retain) NSArray *decoderBlocks;
@property (nonatomic) unsigned long long endID;
@property (nonatomic) struct CVNLPBeamSearch { }*filterBeamSearch;
@property (nonatomic) unsigned long long maxCaptionLen;
@property (nonatomic) unsigned long long outputVocabSize;
@property (nonatomic) unsigned long long startID;
@property (nonatomic, retain) NSDictionary *vocab;
@property (nonatomic) unsigned long long vocabSize;

- (void).cxx_destruct;
- (void)_createBeamSearch:(id)arg1 runTimeParams:(id)arg2;
- (void)_loadNetwork:(id)arg1 options:(id)arg2 runTimeParams:(id)arg3;
- (void)_loadVocabFile:(id)arg1;
- (struct CVNLPBeamSearch { }*)beamSearch;
- (unsigned long long)beamSize;
- (id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2;
- (id)computeCaptionForImageWithInputsImpl:(id)arg1 genderOption:(int)arg2;
- (void)dealloc;
- (unsigned long long)decoderBatchSize;
- (id)decoderBlocks;
- (unsigned long long)endID;
- (struct CVNLPBeamSearch { }*)filterBeamSearch;
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;
- (unsigned long long)maxCaptionLen;
- (unsigned long long)outputVocabSize;
- (id)performanceResults;
- (void)setBeamSearch:(struct CVNLPBeamSearch { }*)arg1;
- (void)setBeamSize:(unsigned long long)arg1;
- (void)setDecoderBatchSize:(unsigned long long)arg1;
- (void)setDecoderBlocks:(id)arg1;
- (void)setEndID:(unsigned long long)arg1;
- (void)setFilterBeamSearch:(struct CVNLPBeamSearch { }*)arg1;
- (void)setMaxCaptionLen:(unsigned long long)arg1;
- (void)setOutputVocabSize:(unsigned long long)arg1;
- (void)setStartID:(unsigned long long)arg1;
- (void)setVocab:(id)arg1;
- (void)setVocabSize:(unsigned long long)arg1;
- (unsigned long long)startID;
- (id)vocab;
- (unsigned long long)vocabSize;

@end
