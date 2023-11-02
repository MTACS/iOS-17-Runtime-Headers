
@protocol ATXEngagementRecordManagerProtocol <NSObject>

@required

- (void)addEngagedExecutable:(NSString *)arg1 clientModelId:(NSString *)arg2 engagementRecordType:(unsigned long long)arg3;
- (void)addEngagedSuggestion:(ATXProactiveSuggestion *)arg1 engagementRecordType:(unsigned long long)arg2;
- (void)addHiddenSuggestion:(ATXProactiveSuggestion *)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;
- (NSSet *)engagedExecutablesOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;
- (bool)hasEngagedWithExecutable:(NSString *)arg1 engagementRecordType:(unsigned long long)arg2;
- (bool)hasEngagedWithSuggestion:(ATXProactiveSuggestion *)arg1 engagedExecutables:(NSSet *)arg2;
- (bool)hasEngagedWithSuggestion:(ATXProactiveSuggestion *)arg1 engagementRecordType:(unsigned long long)arg2;
- (bool)hasReferenceForSuggestion:(ATXProactiveSuggestion *)arg1;
- (NSDictionary *)jsonDict;
- (void)removeAllEngagementsForSuggestion:(ATXProactiveSuggestion *)arg1;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)arg1;
- (void)removeAllEngagementsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeEngagementForExecutableIdentifier:(ATXExecutableIdentifier *)arg1 recordType:(unsigned long long)arg2 abortingRemovalIfEngagementDateIsLaterThanDate:(NSDate *)arg3;
- (void)removeEngagementForSuggestion:(ATXProactiveSuggestion *)arg1 recordType:(unsigned long long)arg2;
- (void)updateForClientModelCacheUpdate:(NSArray *)arg1 clientModelId:(NSString *)arg2;

@end
