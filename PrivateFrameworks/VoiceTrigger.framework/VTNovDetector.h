
@interface VTNovDetector : NSObject {
    void * _novDetect;
}

- (id)_getAnalyzedResultFromNdresult:(struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)dealloc;
- (id)getAnalyzedResultForPhId:(unsigned int)arg1;
- (id)getBestAnalyzedResult;
- (id)getOptionValue:(id)arg1;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (unsigned int)numResultsAvailable;
- (void)reset;
- (void)resetBest;

@end
