
@interface _GKBlockRule : GKRule {
    id /* block */  _action;
    id /* block */  _predicate;
}

- (void).cxx_destruct;
- (bool)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(id /* block */)arg1 action:(id /* block */)arg2;
- (void)performActionWithSystem:(id)arg1;

@end
