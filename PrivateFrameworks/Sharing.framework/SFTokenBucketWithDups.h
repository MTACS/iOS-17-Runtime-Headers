
@interface SFTokenBucketWithDups : NSObject {
    SFTokenBucket * _bucket;
    struct __CFArray { } * _dups;
    unsigned long long  _maxDups;
}

- (void).cxx_destruct;
- (bool)acquireTokenForIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2;

@end
