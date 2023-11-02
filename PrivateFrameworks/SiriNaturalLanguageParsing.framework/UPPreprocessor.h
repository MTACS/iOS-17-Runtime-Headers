
@interface UPPreprocessor : NSObject {
    const struct AbstractFeaturizer { int (**x1)(); } * __featurizer;
    NSLocale * _locale;
}

@property (nonatomic, readonly) NSLocale *locale;

+ (struct vector<nl_featurization::span_matching::MatchedSpan, std::allocator<nl_featurization::span_matching::MatchedSpan>> { struct MatchedSpan {} *x1; struct MatchedSpan {} *x2; struct __compressed_pair<nl_featurization::span_matching::MatchedSpan *, std::allocator<nl_featurization::span_matching::MatchedSpan>> { struct MatchedSpan {} *x_3_1_1; } x3; })buildMatchedSpanListFromQuerySpans:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1 featurizer:(const struct AbstractFeaturizer { int (**x1)(); }*)arg2;
- (id)locale;
- (id)preprocess:(id)arg1 error:(id*)arg2;

@end
