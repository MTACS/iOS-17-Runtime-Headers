
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {
    UITextInputController * _textInput;
    struct __CFStringTokenizer { } * _tokenizer;
    bool  _tokenizerIsInvalid;
    struct { 
        long long location; 
        long long length; 
    }  _tokenizerRange;
    int  _tokenizerType;
    struct __CFStringTokenizer { } * _wordTokenizer;
    bool  _wordTokenizerIsInvalid;
    struct { 
        long long location; 
        long long length; 
    }  _wordTokenizerRange;
}

- (void).cxx_destruct;
- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(bool)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (void)dealloc;
- (id)initWithTextInputController:(id)arg1;
- (void)invalidateTokenizer;

@end
