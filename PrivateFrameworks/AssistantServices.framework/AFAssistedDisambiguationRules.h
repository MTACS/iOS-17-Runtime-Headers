
@interface AFAssistedDisambiguationRules : NSObject

@property (nonatomic, readonly) double decisionAge;
@property (nonatomic, readonly) unsigned long long decisionDepth;
@property (nonatomic, readonly) double decisionThreshold;
@property (nonatomic, readonly) double maxPersistenceAge;
@property (nonatomic, readonly) unsigned long long maxPersistenceDepth;

+ (id)defaultRules;

- (double)decisionAge;
- (unsigned long long)decisionDepth;
- (double)decisionThreshold;
- (double)maxPersistenceAge;
- (unsigned long long)maxPersistenceDepth;
- (double)weightForEvent:(id)arg1;

@end
