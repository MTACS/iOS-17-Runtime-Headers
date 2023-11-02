
@interface CHContextualTextResults : NSObject {
    NSArray * _textResults;
}

@property (nonatomic, retain) NSArray *textResults;

- (void).cxx_destruct;
- (id)initWithTextResults:(id)arg1;
- (void)setTextResults:(id)arg1;
- (id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 intersectionRanges:(id*)arg2;
- (id)textResults;
- (id)topTranscription;

@end
