
@interface ASPredicateContainer : NSObject {
    HDSQLitePredicate * _healthDaemonPredicate;
    NSPredicate * _healthKitPredicate;
}

@property (nonatomic, readonly) HDSQLitePredicate *healthDaemonPredicate;
@property (nonatomic, readonly) NSPredicate *healthKitPredicate;

+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateMatchingAnyPredicates:(id)arg1;

- (void).cxx_destruct;
- (id)healthDaemonPredicate;
- (id)healthKitPredicate;
- (id)initWithHealthKitPredicate:(id)arg1 healthDaemonPredicate:(id)arg2;

@end
