
@interface CHTransliterateChineseJapaneseStep : CHPostprocessingStep {
    void ** _icuTransliterator;
    bool  _transliterateSentences;
}

- (void)dealloc;
- (id)initWithTransliterateSentences:(bool)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end
