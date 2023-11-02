
@interface FCUserEventHistoryTrackingConfiguration : NSObject {
    FCUserEventHistoryPruningPolicies * _pruningPolicies;
}

@property (nonatomic, retain) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)pruningPolicies;
- (void)setPruningPolicies:(id)arg1;

@end
