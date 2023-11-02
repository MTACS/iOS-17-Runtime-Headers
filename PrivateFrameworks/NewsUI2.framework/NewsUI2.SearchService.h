
@interface NewsUI2.SearchService : NSObject {
    void bundleSubscriptionProvider;
    void configManager;
    void configPromise;
    void connection;
    void featureAvailability;
    void localAreas;
    void locationRegionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void purchaseProvider;
    void queryContext;
    void queryContextManager;
    void searchEndpointConfigManager;
    void searchEndpointConfigs;
    void storefrontID;
    void userInterfaceIdiom;
}

- (void).cxx_destruct;
- (id)init;

@end
