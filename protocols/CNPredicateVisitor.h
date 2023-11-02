
@protocol CNPredicateVisitor <NSObject>

@required

- (void)visitCNPredicate:(CNPredicate *)arg1;
- (void)visitNSCompoundPredicate:(NSCompoundPredicate *)arg1;
- (void)visitNSPredicate:(NSPredicate *)arg1;

@end
