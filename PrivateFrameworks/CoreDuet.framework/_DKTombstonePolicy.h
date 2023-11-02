
@interface _DKTombstonePolicy : NSObject {
    NSPredicate * _eventPredicateForEventsRequiredToBeTombstoned;
    NSPredicate * _predicateForEventsRequiredToBeTombstoned;
    NSArray * _propertiesToFetchForTombstones;
    NSArray * _requirements;
}

@property (nonatomic, readonly) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (nonatomic, readonly) NSArray *propertiesToFetchForTombstones;
@property (nonatomic, readonly) NSArray *requirements;

+ (id)defaultPolicy;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRequirements:(id)arg1;
- (id)predicateForEventsRequiredToBeTombstoned;
- (id)propertiesToFetchForTombstones;
- (id)requirements;
- (id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2;
- (id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2;

@end
