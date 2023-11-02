
@interface TCTagger : NLTagger {
    NSString * _language;
    unsigned long long  _maximumTokenCount;
}

@property (readonly, copy) NSString *language;
@property unsigned long long maximumTokenCount;

- (void).cxx_destruct;
- (id)descriptionForFlags:(unsigned long long)arg1;
- (void)enumerateSentencesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)language;
- (unsigned long long)maximumTokenCount;
- (id)sentenceTerminatorCharacterSet;
- (void)setMaximumTokenCount:(unsigned long long)arg1;
- (void)setString:(id)arg1 language:(id)arg2;

@end
