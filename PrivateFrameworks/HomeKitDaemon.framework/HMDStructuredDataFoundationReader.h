
@interface HMDStructuredDataFoundationReader : HMDTokenBasedStructuredReader {
    NSDictionary * _dictionary;
    NSEnumerator * _enumerator;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (struct _HMDStructuredDataToken { long long x1; id x2; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x1; id x2; }*)arg1;

@end
