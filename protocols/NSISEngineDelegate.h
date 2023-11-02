
@protocol NSISEngineDelegate <NSObject>

@required

- (void)constraintsDidChangeInEngine:(NSISEngine *)arg1;
- (NSISVariable *)engine:(NSISEngine *)arg1 markerForConstraintToBreakAmongConstraints:(NSArray *)arg2;
- (void)engine:(NSISEngine *)arg1 willBreakConstraint:(id <NSISConstraint>)arg2 dueToMutuallyExclusiveConstraints:(NSArray *)arg3;

@optional

- (void)solutionDidChangeInEngine:(NSISEngine *)arg1;

@end
