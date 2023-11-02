
@interface FrontendDNNEspressoModel : ADEspressoRunner {
    ADEspressoBufferHandle * _inputBufferHandle;
    ADEspressoBufferHandle * _resultsOutputXBufferHandle;
    ADEspressoBufferHandle * _resultsOutputYBufferHandle;
    ADEspressoBufferHandle * _resultsOutputZBufferHandle;
    ADEspressoBufferHandle * _stdOutputXBufferHandle;
    ADEspressoBufferHandle * _stdOutputYBufferHandle;
    ADEspressoBufferHandle * _stdOutputZBufferHandle;
}

@property (nonatomic, retain) ADEspressoBufferHandle *inputBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *resultsOutputXBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *resultsOutputYBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *resultsOutputZBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *stdOutputXBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *stdOutputYBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *stdOutputZBufferHandle;

- (void).cxx_destruct;
- (bool)initializeInputOutputBlobs;
- (id)inputBufferHandle;
- (int)processImage:(float*)arg1 withSize:(int)arg2 result:(id*)arg3;
- (id)resultsOutputXBufferHandle;
- (id)resultsOutputYBufferHandle;
- (id)resultsOutputZBufferHandle;
- (void)setInputBufferHandle:(id)arg1;
- (void)setResultsOutputXBufferHandle:(id)arg1;
- (void)setResultsOutputYBufferHandle:(id)arg1;
- (void)setResultsOutputZBufferHandle:(id)arg1;
- (void)setStdOutputXBufferHandle:(id)arg1;
- (void)setStdOutputYBufferHandle:(id)arg1;
- (void)setStdOutputZBufferHandle:(id)arg1;
- (id)stdOutputXBufferHandle;
- (id)stdOutputYBufferHandle;
- (id)stdOutputZBufferHandle;

@end
