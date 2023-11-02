
@interface NewsAnalytics.DynamicEndpoint : _TtCs12_SwiftObject <AAEndpointProvider> {
    void appConfigurationManager;
    void environment;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;

- (id)endpointURLWithContentType:(long long)arg1;
- (id)name;
- (id)sharedContainerIdentifier;
- (id)url;

@end
