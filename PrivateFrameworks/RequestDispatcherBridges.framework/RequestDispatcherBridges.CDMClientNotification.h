
@interface RequestDispatcherBridges.CDMClientNotification : NSObject <CDMClientDelegate, CDMTrialAssetsDelegate> {
    void cdmProxy;
}

- (void).cxx_destruct;
- (void)assetsAvailable;
- (void)assetsAvailableForLocale:(id)arg1;
- (void)assetsUnavailable;
- (id)init;
- (void)processCDMNluRequestCallback:(id)arg1;
- (void)processCDMNluRequestErrorCallback:(id)arg1 error:(id)arg2;

@end
