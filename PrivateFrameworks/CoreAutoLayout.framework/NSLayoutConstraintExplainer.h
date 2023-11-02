
@interface NSLayoutConstraintExplainer : NSObject {
    NSLayoutConstraint * _constraint;
    NSMutableSet * _frozenConstraints;
    NSArray * _mutuallyExclusiveConstraints;
    NSMapTable * _priorities;
    NSMutableSet * _relaxedConstraints;
    NSMutableSet * _requiredConstraints;
    NSMapTable * _satisfactionChanges;
}

@property (retain) NSArray *mutuallyExclusiveConstraints;
@property (retain) NSMapTable *priorities;
@property (retain) NSMapTable *satisfactionChanges;

- (void)_freezeErrorVariable:(id)arg1 forcingZeroValue:(bool)arg2 inEngine:(id)arg3 accumulatingConstraints:(id)arg4 andMutuallyExclusiveConstraints:(id*)arg5;
- (unsigned long long)_satisfactionChangeCount:(id /* block */)arg1 withResults:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)freezeConstraint:(id)arg1;
- (id)initWithConstraint:(id)arg1;
- (id)mutuallyExclusiveConstraints;
- (id)priorities;
- (void)recalculateExplanation;
- (id)relaxConstraint:(id)arg1;
- (id)requireConstraint:(id)arg1;
- (id)satisfactionChanges;
- (void)setMutuallyExclusiveConstraints:(id)arg1;
- (void)setPriorities:(id)arg1;
- (void)setSatisfactionChanges:(id)arg1;
- (id)thawConstraint:(id)arg1;

@end
