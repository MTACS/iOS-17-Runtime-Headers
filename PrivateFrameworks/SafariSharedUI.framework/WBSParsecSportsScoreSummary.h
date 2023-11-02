
@interface WBSParsecSportsScoreSummary : WBSParsecModel {
    NSArray * _images;
    NSArray * _scores;
    NSString * _subtitle;
}

@property (nonatomic, readonly, copy) NSArray *images;
@property (nonatomic, readonly, copy) NSArray *scores;
@property (nonatomic, readonly, copy) NSString *subtitle;

+ (id)schema;

- (void).cxx_destruct;
- (id)images;
- (id)initWithDictionary:(id)arg1;
- (id)scores;
- (id)subtitle;

@end
