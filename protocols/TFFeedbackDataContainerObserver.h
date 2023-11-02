
@protocol TFFeedbackDataContainerObserver <NSObject>

@required

- (void)feedbackDataContainer:(TFFeedbackDataContainer *)arg1 didUpdateValuesForGroupIdentifiers:(NSArray *)arg2 entryIdentifiers:(NSArray *)arg3;

@end
