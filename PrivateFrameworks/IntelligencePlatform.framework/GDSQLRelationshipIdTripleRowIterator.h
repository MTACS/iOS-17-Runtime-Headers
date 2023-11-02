
@interface GDSQLRelationshipIdTripleRowIterator : NSObject <NSFastEnumeration> {
    NSString * _iteratePredicateValue;
    NSString * _iterateRelationshipIdValue;
    NSString * _iterateSubjectValue;
    GDLazyGraphTripleRow * _lazyTripleRow;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithLazyTripleRow:(id)arg1;

@end
