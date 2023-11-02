
@interface CHReorderSCTCConfusionStep : CHPostprocessingStep {
    void ** _icuTransliterator;
    long long  _maxResultCount;
}

- (void)dealloc;
- (id)initWithMaxResultCount:(long long)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end
