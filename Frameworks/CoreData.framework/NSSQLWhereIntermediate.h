
@interface NSSQLWhereIntermediate : NSSQLIntermediate {
    NSPredicate * _predicate;
}

- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;

@end
