
@interface DisambiguateActionsIntent : INIntent

@property (nonatomic, copy) NSString *candidateActions;
@property (nonatomic, copy) NSString *candidateBundles;
@property (nonatomic, copy) NSString *selectedCandidateIndex;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
