
@interface RKEventIdentifier : NSObject {
    const void * _ioMappings;
    RKMontrealModel * _model;
    int  _outputPermutation;
    RKNLEventTokenizer * _tokenizer;
}

- (void).cxx_destruct;
- (id)_identifyOwnedTokenSequences:(id)arg1;
- (id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(struct RKEventIdentifierRange { unsigned long long x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg3;
- (id)identifyMessage:(id)arg1;
- (id)identifyStrings:(id)arg1;
- (id)identifyText:(id)arg1;
- (id)init;
- (id)initWithLanguageID:(id)arg1;
- (void)resetEventIdentifierModel;

@end
