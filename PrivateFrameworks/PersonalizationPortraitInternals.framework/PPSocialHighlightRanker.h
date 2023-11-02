
@interface PPSocialHighlightRanker : NSObject {
    NSObject<PPSocialHighlightScorer> * _firstPassScorer;
    unsigned int  _topKCount;
    NSObject<PPSocialHighlightScorer> * _topKScorer;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFirstPassScorer:(id)arg1 topKScorer:(id)arg2 topKCount:(unsigned int)arg3;
- (id)rankSocialHighlights:(id)arg1 client:(id)arg2 performRerank:(bool)arg3;
- (id)rerankSocialHighlightsForTopOneResult:(id)arg1 client:(id)arg2;

@end
