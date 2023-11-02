
@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _circularLocationRegions;
    bool  _evaluateOnEveryKeyPathUpdate;
    NSSet * _keyPaths;
    double  _minimumDurationInPreviousState;
    NSPredicate * _predicate;
    NSPredicate * _predicateForPreviousState;
    NSOrderedSet * _timeBasedPredicateEvaluationIntervals;
}

@property (nonatomic, retain) NSSet *circularLocationRegions;
@property (nonatomic) bool evaluateOnEveryKeyPathUpdate;
@property (nonatomic, readonly) bool firesOnAnyChange;
@property (nonatomic, copy) NSSet *keyPaths;
@property (nonatomic) double minimumDurationInPreviousState;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSPredicate *predicateForPreviousState;
@property (nonatomic, retain) NSOrderedSet *timeBasedPredicateEvaluationIntervals;

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1 withMinimumDurationInPreviousState:(double)arg2;
+ (id)predicateForChangeAtKeyPaths:(id)arg1;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3;
+ (id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 withPredicateForPreviousState:(id)arg3 withMinimumDurationInPreviousState:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)circularLocationRegions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateOnEveryKeyPathUpdate;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithState:(id)arg1 previousValue:(id)arg2;
- (bool)firesOnAnyChange;
- (unsigned long long)hash;
- (id)initForChangeAtKeyPath:(id)arg1;
- (id)initForChangeAtKeyPath:(id)arg1 equalToValue:(id)arg2;
- (id)initForChangeAtKeyPaths:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPaths;
- (double)minimumDurationInPreviousState;
- (id)predicate;
- (id)predicateForPreviousState;
- (void)setCircularLocationRegions:(id)arg1;
- (void)setEvaluateOnEveryKeyPathUpdate:(bool)arg1;
- (void)setKeyPaths:(id)arg1;
- (void)setMinimumDurationInPreviousState:(double)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPredicateForPreviousState:(id)arg1;
- (void)setTimeBasedPredicateEvaluationIntervals:(id)arg1;
- (id)timeBasedPredicateEvaluationIntervals;

@end
