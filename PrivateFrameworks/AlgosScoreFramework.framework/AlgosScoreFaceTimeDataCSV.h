
@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV {
    NSDictionary * _methods;
}

@property (nonatomic, retain) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (void).cxx_destruct;
- (id)init;
- (bool)matchesMethod:(id)arg1 code:(long long)arg2;
- (id)methods;
- (void)setMethods:(id)arg1;
- (id)setUpMethods;
- (int)transformer;
- (bool)validMethod:(long long)arg1;

@end
