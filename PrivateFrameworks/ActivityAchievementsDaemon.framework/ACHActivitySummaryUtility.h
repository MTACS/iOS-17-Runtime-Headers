
@interface ACHActivitySummaryUtility : NSObject {
    HDProfile * _profile;
    HDActivitySummaryBuilder * _summaryBuilder;
}

@property (nonatomic, copy) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) HDActivitySummaryBuilder *summaryBuilder;

- (void).cxx_destruct;
- (bool)_enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(id /* block */)arg2 error:(id*)arg3;
- (id)databaseContext;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(bool)arg2;
- (id)newEmptyActivitySummaryFromSummary:(id)arg1;
- (id)profile;
- (void)setDatabaseContext:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSummaryBuilder:(id)arg1;
- (id)summaryBuilder;

@end
