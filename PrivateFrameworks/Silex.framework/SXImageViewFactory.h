
@interface SXImageViewFactory : NSObject <SXImageViewFactory> {
    <SWReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)imageViewForResource:(id)arg1;
- (id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2;
- (id)reachabilityProvider;
- (id)repeatableImageViewForResource:(id)arg1;
- (id)resourceDataSourceProvider;

@end
