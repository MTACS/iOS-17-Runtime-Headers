
@interface TextProcessorTrain : NSObject <TextProcessor> {
    long long * _numValidTokens;
    NSMutableArray * _text;
    _EARLMTKaldiVocab * _vocab;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addText:(id)arg1;
- (void)addText:(id)arg1 length:(unsigned long long)arg2;
- (void)addTokenizedText:(id)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)initWithVocab:(id)arg1;
- (unsigned long long)numberSamples;
- (long long)numberTokens;
- (void)shuffleSamples;
- (id)textSequence;

@end
