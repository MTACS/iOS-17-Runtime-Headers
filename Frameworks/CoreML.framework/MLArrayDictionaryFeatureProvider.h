
@interface MLArrayDictionaryFeatureProvider : NSObject <MLBatchProvider, NSSecureCoding> {
    NSArray * _array;
}

@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) long long count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)array;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)featuresAtIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryFeatureProviderArray:(id)arg1;

@end
