
@interface WBSFrequentlyVisitedSiteCandidate : NSObject {
    float  _score;
    NSString * _title;
    NSString * _urlString;
}

@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *urlString;

- (void).cxx_destruct;
- (id)initWithURLString:(id)arg1 title:(id)arg2 score:(float)arg3;
- (float)score;
- (id)title;
- (id)urlString;

@end
