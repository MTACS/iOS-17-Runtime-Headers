
@interface SearchUIAsyncSectionLoaderRequest : NSObject {
    id /* block */  _computeBlock;
    NSString * _identifier;
}

@property (copy) id /* block */ computeBlock;
@property (retain) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)computeBlock;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)setComputeBlock:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;

@end
