
@interface ECTwoIntegerKeyCache : NSObject {
    bool  _assertForCollisions;
    OITSUIntegerKeyDictionary * mCache;
}

@property (nonatomic) bool assertForCollisions;

- (void).cxx_destruct;
- (bool)assertForCollisions;
- (id)init;
- (id)objectForKey1:(long long)arg1 key2:(long long)arg2;
- (void)setAssertForCollisions:(bool)arg1;
- (void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3;

@end
