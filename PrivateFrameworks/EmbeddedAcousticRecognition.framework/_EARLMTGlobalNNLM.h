
@interface _EARLMTGlobalNNLM : NSObject {
    NSString * _assetPath;
    NSArray * _attachments;
    NSMutableArray * _data;
    NSData * _delta;
    bool  _deltaIsPartial;
    NSMutableArray * _evalData;
    DataSourceInference * _fofeInferenceSource;
    DataSourceTrain * _fofeTrainSource;
    NSString * _language;
    SimpleMmapBuffer * _mmappedPartialWeights;
    SimpleMmapBuffer * _mmappedWeights;
    unsigned long long  _numParam;
    unsigned long long  _numWordsEval;
    unsigned long long  _numWordsTrain;
    NSMutableDictionary * _partialUpdateOffsets;
    NSDictionary * _recipe;
    NSMutableDictionary * _results;
    NSDictionary * _tensorInfo;
    NSDictionary * _tensors;
    NSDictionary * _tensorsWeightMap;
    TextProcessorInference * _textProcessorInference;
    TextProcessorTrain * _textProcessorTrain;
    NSMutableArray * _trainData;
    _EARLMTKaldiVocab * _vocab;
    struct unique_ptr<float[], std::default_delete<float[]>> { 
        struct __compressed_pair<float *, std::default_delete<float[]>> { 
            float *__value_; 
        } __ptr_; 
    }  _weights;
    bool  _weightsAreUpdated;
    float * _weightsRawPtr;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, readonly) NSData *delta;
@property (nonatomic, readonly) bool deltaIsPartial;
@property (nonatomic, copy) NSMutableArray *evalData;
@property (nonatomic, readonly) NSMutableDictionary *results;
@property (nonatomic, copy) NSMutableArray *trainData;
@property (nonatomic, readonly) _EARLMTKaldiVocab *vocab;

+ (id)attachmentURL:(id)arg1 withName:(id)arg2;
+ (id)compressedAttachmentURLFromRecipe:(id)arg1 attachments:(id)arg2;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fetchTensorInfo:(id)arg1;
- (id)attachments;
- (id)computeDelta:(bool)arg1;
- (id)delta;
- (bool)deltaIsPartial;
- (id)evalData;
- (id)evaluate;
- (id)evaluatePartialDelta;
- (id)findTensorsIndicesByKeyWord:(id)arg1 tensorInfo:(id)arg2;
- (id)getEvalTask:(id*)arg1;
- (id)getTrainTask:(id*)arg1;
- (id)initWithRecipe:(id)arg1;
- (id)initWithRecipe:(id)arg1 assetPath:(id)arg2;
- (id)loadData;
- (id)loadWeight;
- (id)restoreFromLatestWeights:(id)arg1;
- (id)results;
- (id)saveWeight:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setEvalData:(id)arg1;
- (void)setTrainData:(id)arg1;
- (id)setup;
- (id)train;
- (id)trainData;
- (id)vocab;

@end
