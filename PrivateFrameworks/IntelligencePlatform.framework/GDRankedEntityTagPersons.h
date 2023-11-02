
@interface GDRankedEntityTagPersons : NSObject {
    NSArray * _scoredEntities;
    GDScoreRankedEntityTagPersonsInner * inner;
}

@property (nonatomic, readonly) long long feedbackEventId;
@property (nonatomic, retain) NSArray *scoredEntities;
@property (nonatomic, readonly) long long tag;

- (void).cxx_destruct;
- (long long)feedbackEventId;
- (id)initWithTag:(long long)arg1 scoredEntities:(id)arg2 entityRelevanceInferenceEventId:(long long)arg3;
- (id)scoredEntities;
- (void)setScoredEntities:(id)arg1;
- (long long)tag;

@end
