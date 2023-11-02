
@interface HKCountrySetBitmaskPath : NSObject {
    unsigned long long  _bitmask;
    long long  _index;
}

@property (nonatomic, readonly) unsigned long long bitmask;
@property (nonatomic, readonly) long long index;

+ (id)pathWithBitmask:(unsigned long long)arg1 index:(long long)arg2;

- (unsigned long long)bitmask;
- (unsigned long long)hash;
- (long long)index;
- (bool)isEqual:(id)arg1;

@end
