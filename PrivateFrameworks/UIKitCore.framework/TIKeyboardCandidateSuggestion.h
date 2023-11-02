
@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {
    unsigned long long  _customInfoType;
    UITextSuggestion * _textSuggestion;
}

@property (nonatomic, readonly) UITextSuggestion *textSuggestion;

+ (id)candidateWithSuggestion:(id)arg1;
+ (id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customInfoType;
- (id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)textSuggestion;

@end
