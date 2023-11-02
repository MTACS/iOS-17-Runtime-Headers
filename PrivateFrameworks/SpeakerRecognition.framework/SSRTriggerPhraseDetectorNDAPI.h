
@interface SSRTriggerPhraseDetectorNDAPI : NSObject {
    void * _novDetect;
    unsigned long long  _phId;
}

- (id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)dealloc;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 phId:(unsigned long long)arg3;
- (void)reset;

@end
