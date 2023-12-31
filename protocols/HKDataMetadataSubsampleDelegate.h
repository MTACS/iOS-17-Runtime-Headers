
@protocol HKDataMetadataSubsampleDelegate

@required

- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (void)finishedAggregateQuery;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;

@end
