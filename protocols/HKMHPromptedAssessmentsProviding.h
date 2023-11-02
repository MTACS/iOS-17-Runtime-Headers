
@protocol HKMHPromptedAssessmentsProviding

@required

- (NSArray *)promptedAssessmentsWithError:(id*)arg1;
- (void)registerObserver:(id <HKMHPromptedAssessmentsProvidingObserver>)arg1 queue:(OS_dispatch_queue *)arg2;
- (void)unregisterObserver:(id <HKMHPromptedAssessmentsProvidingObserver>)arg1;

@end
