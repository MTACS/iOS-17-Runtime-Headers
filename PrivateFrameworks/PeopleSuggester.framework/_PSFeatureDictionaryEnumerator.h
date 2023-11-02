
@interface _PSFeatureDictionaryEnumerator : NSEnumerator {
    unsigned long long  _i;
    NSEnumerator * _keyEnumerator;
    bool  _loadedOtherValuesEnumerator;
    NSDictionary * _otherValues;
    NSDictionary * _timeBuckets;
    NSArray * _timeBucketsArray;
}

- (void).cxx_destruct;
- (id)allObjects;
- (id)init;
- (id)nextObject;

@end
