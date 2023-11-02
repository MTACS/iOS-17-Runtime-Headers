
@interface GKLoadBundleResourceOperation : GKLoadResourceOperation {
    NSString * _resourceName;
    NSArray * _searchBundles;
}

@property (nonatomic, readonly, copy) NSString *resourceName;
@property (nonatomic, readonly, copy) NSArray *searchBundles;

- (void).cxx_destruct;
- (id)initWithResourceName:(id)arg1 searchBundles:(id)arg2;
- (void)main;
- (id)resourceName;
- (id)searchBundles;

@end
