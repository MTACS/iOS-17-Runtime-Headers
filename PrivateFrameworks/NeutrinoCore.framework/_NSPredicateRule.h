
@interface _NSPredicateRule : NSPredicateRule {
    bool  _asserting;
    NSString * _fact;
    double  _grade;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(double)arg3 asserting:(bool)arg4;
- (void)performActionWithSystem:(id)arg1;

@end
