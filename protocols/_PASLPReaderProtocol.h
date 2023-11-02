
@protocol _PASLPReaderProtocol

@required

- (NSString *)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(_PASLPDictionaryContext *)arg2;
- (NSObject *)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(_PASLPArrayContext *)arg2;
- (NSObject *)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(_PASLPDictionaryContext *)arg2;
- (NSObject *)objectForKey:(id)arg1 usingDictionaryContext:(_PASLPDictionaryContext *)arg2;
- (NSObject *)rootObjectWithErrMsg:(id*)arg1;

@end
