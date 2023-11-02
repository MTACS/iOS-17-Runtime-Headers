
@interface TranslationUI.DisambiguationResultModel : NSObject <_LTDisambiguableResultDelegate, _LTDisambiguableResultObserving> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sourceAttributedText;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _targetAttributedText;
    void disambiguableResult;
    void displaySource;
    void excludedTypes;
    void globalAttributeProvider;
    void linkAttributeProvider;
    void renderMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sourceLocale;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  targetLocale;
    void userSelectionHandler;
}

- (void).cxx_destruct;
- (void)disambiguableResult:(id)arg1 didChangeResultForSentence:(id)arg2 withSelection:(id)arg3;
- (void)disambiguableResultDidUpdate:(id)arg1;
- (id)excludedTypesForResult:(id)arg1;
- (id)init;

@end
