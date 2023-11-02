
@interface CSReusableBufferPoolConfiguration : NSObject {
    unsigned long long  _backingStoreCapacity;
    double  _backingStoreIdleTimeout;
    unsigned long long  _maximumNumberOfBackingStores;
    unsigned long long  _minimalNumberOfBackingStores;
}

@property (nonatomic, readonly) unsigned long long backingStoreCapacity;
@property (nonatomic, readonly) double backingStoreIdleTimeout;
@property (nonatomic, readonly) unsigned long long maximumNumberOfBackingStores;
@property (nonatomic, readonly) unsigned long long minimalNumberOfBackingStores;

- (unsigned long long)backingStoreCapacity;
- (double)backingStoreIdleTimeout;
- (id)description;
- (id)initWithBackingStoreCapacity:(unsigned long long)arg1 minimalNumberOfBackingStores:(unsigned long long)arg2 maximumNumberOfBackingStores:(unsigned long long)arg3 backingStoreIdleTimeout:(double)arg4;
- (unsigned long long)maximumNumberOfBackingStores;
- (unsigned long long)minimalNumberOfBackingStores;

@end
