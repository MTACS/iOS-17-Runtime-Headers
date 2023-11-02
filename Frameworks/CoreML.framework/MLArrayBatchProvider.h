
@interface MLArrayBatchProvider : NSObject <MLBatchProvider> {
    NSArray * _array;
}

@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) long long count;

- (void).cxx_destruct;
- (id)array;
- (long long)count;
- (id)featuresAtIndex:(long long)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithFeatureProviderArray:(id)arg1;

@end
