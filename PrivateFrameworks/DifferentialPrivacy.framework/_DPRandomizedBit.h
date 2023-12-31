
@interface _DPRandomizedBit : NSObject {
    unsigned long long  _index;
    long long  _value;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long value;

+ (id)randomizedBit:(long long)arg1 atIndex:(unsigned long long)arg2;

- (id)description;
- (unsigned long long)index;
- (id)init;
- (id)initBit:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)value;

@end
