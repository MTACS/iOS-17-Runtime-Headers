
@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation {
    NSString * _resourceName;
    NSArray * _searchBundles;
}

@property (nonatomic, readonly, copy) NSString *resourceName;
@property (nonatomic, readonly, copy) NSArray *searchBundles;

+ (id)_searchBundles;
+ (id)supportedScheme;

- (void).cxx_destruct;
- (id)initWithResourceName:(id)arg1;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2;
- (void)main;
- (id)resourceName;
- (id)searchBundles;

@end
