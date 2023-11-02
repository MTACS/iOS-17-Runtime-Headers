
@interface CRMultiLocaleTextRecognizer : CRMultiModelTextRecognizer {
    NSMutableDictionary * _textRecognizers;
}

@property (retain) NSMutableDictionary *textRecognizers;

- (void).cxx_destruct;
- (void)cancel;
- (id)decodingStats;
- (id)identifierForTextRegion:(id)arg1;
- (id)inferenceStats;
- (id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2;
- (id)recognizerForIdentifier:(id)arg1;
- (void)setTextRecognizers:(id)arg1;
- (id)textRecognizers;

@end
