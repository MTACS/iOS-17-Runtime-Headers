
@protocol TextProcessor <NSObject>

@required

- (void)addText:(NSString *)arg1;
- (id)initWithVocab:(_EARLMTKaldiVocab *)arg1;
- (NSArray *)textSequence;

@end
