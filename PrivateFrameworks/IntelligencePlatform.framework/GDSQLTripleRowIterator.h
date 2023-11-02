
@interface GDSQLTripleRowIterator : NSObject <NSFastEnumeration> {
    bool  _internalIteratorStarted;
    NSString * _iterateSubjectValue;
    GDLazyGraphTripleRow * _lazyTripleRow;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithColumns:(unsigned long long)arg1 statement:(id)arg2 subjectOverride:(id)arg3;
- (id)relationshipIdIterator;

@end
