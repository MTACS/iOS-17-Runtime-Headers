
@interface BMBehaviorRetriever : NSObject {
    unsigned long long  _fetchLimit;
    BMBehaviorStorage * _storage;
}

@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) BMBehaviorStorage *storage;

- (void).cxx_destruct;
- (unsigned long long)fetchLimit;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 taskSpecificItemTypes:(id)arg2;
- (id)retrieveRulesWithAbsoluteSupport:(unsigned long long)arg1 support:(double)arg2 confidence:(double)arg3 conviction:(double)arg4 lift:(double)arg5 rulePowerFactor:(double)arg6 uniqueDaysLastWeek:(unsigned long long)arg7 uniqueDaysTotal:(unsigned long long)arg8 filters:(id)arg9 error:(id*)arg10;
- (id)retrieveRulesWithFilters:(id)arg1;
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3;
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id*)arg4;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
