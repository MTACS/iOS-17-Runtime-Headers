
@interface _LTTextLanguageDetectorScorerItem : NSObject {
    double  _confidence;
    NSLocale * _locale;
    long long  _wordCount;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) long long wordCount;

- (void).cxx_destruct;
- (double)confidence;
- (id)initWithLocale:(id)arg1 confidence:(double)arg2 wordCount:(long long)arg3;
- (id)locale;
- (double)score;
- (long long)wordCount;

@end
