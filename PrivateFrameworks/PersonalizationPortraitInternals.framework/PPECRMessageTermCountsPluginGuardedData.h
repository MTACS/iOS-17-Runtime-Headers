
@interface PPECRMessageTermCountsPluginGuardedData : NSObject {
    unsigned long long  _eventCount;
    _PASBloomFilterForWriting * _streamContentBloomFilter;
}

- (void).cxx_destruct;
- (id)init;

@end
