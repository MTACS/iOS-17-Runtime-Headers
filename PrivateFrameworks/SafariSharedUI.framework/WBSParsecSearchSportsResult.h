
@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult> {
    WBSParsecSearchSportsAttributionExtraCompletionItem * _extraCompletionItem;
    WBSParsecSportsScoreSummary * _scoreSummary;
}

@property (nonatomic, readonly) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;
@property (nonatomic, readonly, copy) NSArray *images;
@property (nonatomic, readonly, copy) NSArray *individualScores;
@property (nonatomic, readonly, copy) NSString *subtitle;

+ (id)_specializedSchema;

- (void).cxx_destruct;
- (id)extraCompletionItem;
- (id)images;
- (id)individualScores;
- (id)initWithDictionary:(id)arg1;
- (id)subtitle;

@end
