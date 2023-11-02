
@interface MAIndexCache : NSObject {
    NSDictionary * _cache;
    NSArray * _labels;
}

@property (nonatomic, readonly) NSDictionary *cache;
@property (nonatomic, readonly, copy) NSArray *labels;

- (void).cxx_destruct;
- (id)cache;
- (unsigned long long)hash;
- (long long)indexOfLabel:(id)arg1;
- (id)initWithLabels:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)labels;

@end
