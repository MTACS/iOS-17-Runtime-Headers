
@interface SeymourUI.EngagementPresentationCoordinator : NSObject <IAMApplicationContextProvider> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  engagementBannerRuleInfo;
    void engagementClient;
    void eventHub;
    void isActive;
    void messageCoordinator;
    void modalContextProvider;
    void subscriptionToken;
}

@property (nonatomic, readonly) bool allowsModalMessageDisplay;

- (void).cxx_destruct;
- (bool)allowsModalMessageDisplay;
- (id)contextPropertyWithName:(id)arg1;
- (id)init;
- (id)viewControllerForModalPresentation;

@end
