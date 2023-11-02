
@interface _PASLPDictionaryEnumerator : NSEnumerator {
    _PASLPDictionaryContext * _context;
    unsigned long long  _ofs;
    <_PASLPReaderProtocol> * _reader;
}

- (void).cxx_destruct;
- (id)initWithLazyPlistReader:(id)arg1 context:(id)arg2;
- (id)nextObject;

@end
