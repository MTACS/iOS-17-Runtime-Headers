
@interface NBBloomFilterReader : NSObject {
    NBObjCBloomFilterReader * _bloomFilterReader;
}

@property (nonatomic, readonly) NBObjCBloomFilterReader *bloomFilterReader;

- (void).cxx_destruct;
- (id)bloomFilterReader;
- (id)initWithData:(id)arg1 hashFunctionCount:(unsigned long long)arg2;
- (bool)maybeContainsString:(id)arg1;

@end
