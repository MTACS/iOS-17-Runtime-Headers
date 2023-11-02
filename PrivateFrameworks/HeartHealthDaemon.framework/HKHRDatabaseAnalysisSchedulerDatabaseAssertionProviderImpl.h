
@interface HKHRDatabaseAnalysisSchedulerDatabaseAssertionProviderImpl : NSObject <HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> {
    NSString * _identifier;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 identifier:(id)arg2;
- (id)takeAssertionWithError:(id*)arg1;

@end
