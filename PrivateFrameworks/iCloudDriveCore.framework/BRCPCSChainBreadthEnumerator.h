
@interface BRCPCSChainBreadthEnumerator : NSEnumerator {
    BRCPCSChainInfo * _chainInfo;
    PQLResultSet<PQLEnumeration> * _enumerator;
}

- (void).cxx_destruct;
- (id)chainInfo;
- (void)dealloc;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)nextObject;

@end
