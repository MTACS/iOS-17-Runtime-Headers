
@interface NBObjCBloomFilterReader : NSObject {
    void bloomFilterReader;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1 hashFunctionCount:(long long)arg2;
- (bool)maybeContainsString:(id)arg1;

@end
