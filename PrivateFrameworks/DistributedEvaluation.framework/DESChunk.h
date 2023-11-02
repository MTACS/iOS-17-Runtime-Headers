
@interface DESChunk : NSObject {
    NSNumber * _clippingBound;
    NSMutableData * _data;
    NSString * _key;
}

@property (nonatomic, retain) NSNumber *clippingBound;
@property (nonatomic, readonly) NSMutableData *data;
@property (nonatomic, readonly) NSString *key;

- (void).cxx_destruct;
- (id)clippingBound;
- (id)data;
- (unsigned long long)hash;
- (id)initWithKey:(id)arg1 clippingBound:(id)arg2 data:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setClippingBound:(id)arg1;

@end
