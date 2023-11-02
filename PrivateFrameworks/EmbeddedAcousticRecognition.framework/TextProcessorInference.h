
@interface TextProcessorInference : NSObject <TextProcessor> {
    NSMutableArray * _text;
    _EARLMTKaldiVocab * _vocab;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addText:(id)arg1;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1 vocab:(id)arg2 BOS:(unsigned long long)arg3;
- (id)initWithVocab:(id)arg1;
- (void)resetWithBOS:(unsigned long long)arg1;
- (id)textSequence;

@end
