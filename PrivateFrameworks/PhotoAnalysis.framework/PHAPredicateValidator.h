
@interface PHAPredicateValidator : NSObject {
    NSSet * _allowedKeyPaths;
}

@property (retain) NSSet *allowedKeyPaths;

- (void).cxx_destruct;
- (id)allowedKeyPaths;
- (void)setAllowedKeyPaths:(id)arg1;
- (bool)validateExpression:(id)arg1 error:(id*)arg2;
- (bool)validatePredicate:(id)arg1 error:(id*)arg2;
- (bool)validateValue:(id)arg1 error:(id*)arg2;

@end
