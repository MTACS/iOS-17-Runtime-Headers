
@interface CRKASMAtomicRosterConstraint : NSObject <NSCopying> {
    NSUUID * _identifier;
    id /* block */  _rosterEvaluator;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) id /* block */ rosterEvaluator;

+ (id)constraintWithRosterEvaluator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 rosterEvaluator:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFulfilledByRoster:(id)arg1;
- (id /* block */)rosterEvaluator;

@end
