
@interface NUMutableDataSet : NUDataSet

@property (nonatomic, readonly) long long capacity;

- (void*)_data;
- (void)addValue:(double)arg1;
- (void)appendDataSet:(id)arg1;
- (long long)capacity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(long long)arg1;

@end
