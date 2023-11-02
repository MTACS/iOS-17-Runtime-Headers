
@interface SeymourUI.PreviewPlayerDataProvider : NSObject {
    void activationState;
    void assetClient;
    void audioSessionCoordinator;
    void bag;
    void contentIdentifier;
    void dependencies;
    void display;
    void dynamicOfferCoordinator;
    void eventHub;
    void marketingItemProvider;
    void marketingMetricFieldsProvider;
    void placement;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  preview;
    void purchaseHandler;
    void subscriptionCache;
}

- (void).cxx_destruct;
- (id)init;
- (void)playerFinished:(id)arg1;

@end
