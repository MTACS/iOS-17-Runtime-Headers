
@interface FCCacheCoordinatorFlushPolicy : NSObject {
    bool  _alwaysFlushKeysWithZeroInterest;
    unsigned long long  _highWaterMark;
    unsigned long long  _lowWaterMark;
}

@property (nonatomic, readonly) bool alwaysFlushKeysWithZeroInterest;
@property (nonatomic, readonly) unsigned long long highWaterMark;
@property (nonatomic, readonly) unsigned long long lowWaterMark;

- (bool)alwaysFlushKeysWithZeroInterest;
- (unsigned long long)highWaterMark;
- (id)initWithLowWaterMark:(unsigned long long)arg1 highWaterMark:(unsigned long long)arg2 alwaysFlushKeysWithZeroInterest:(bool)arg3;
- (unsigned long long)lowWaterMark;

@end
