
@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {
    NSMutableDictionary * _namedEntityScores;
    PPNamedEntityStore * _namedEntityStore;
}

@property (nonatomic, readonly) NSDictionary *namedEntityScores;

+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_init;
- (void)_loadStoreIfNeeded;
- (void)dealloc;
- (id)namedEntityScores;
- (void)update;
- (float)userAffinityToContent:(id)arg1;

@end
