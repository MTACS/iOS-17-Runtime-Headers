
@interface GDRankedPersonEntityTags : NSObject {
    long long  _entityRelevanceInferenceEventId;
    NSArray * _scoredPersonEntityTags;
    GDScoreRankedPersonEntityTagsInner * inner;
}

@property (nonatomic, readonly) long long entityRelevanceInferenceEventId;
@property (nonatomic, readonly) long long idValue;
@property (nonatomic, retain) NSArray *scoredPersonEntityTags;

- (void).cxx_destruct;
- (long long)entityRelevanceInferenceEventId;
- (long long)feedbackEventId;
- (long long)idValue;
- (id)initWithIDValue:(long long)arg1 scoredPersonEntityTags:(id)arg2 entityRelevanceInferenceEventId:(long long)arg3;
- (id)scoredPersonEntityTags;
- (void)setScoredPersonEntityTags:(id)arg1;

@end
