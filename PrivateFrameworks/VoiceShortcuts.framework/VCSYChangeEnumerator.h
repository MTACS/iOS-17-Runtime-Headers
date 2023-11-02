
@interface VCSYChangeEnumerator : NSEnumerator {
    unsigned long long  _count;
    NSEnumerator * _enumerator;
    unsigned long long  _index;
}

- (void).cxx_destruct;
- (id)initWithLazyArray:(id)arg1;
- (id)nextObject;

@end
