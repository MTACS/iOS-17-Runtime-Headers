
@interface AppStoreKitInternal.AppLaunchMetricsEvent : AppStoreKitInternal.MetricsEvent {
    void bagFailureTime;
    void bagStartTime;
    void bagSuccessTime;
    void builtDependencies;
    void jsSetupEndTime;
    void jsSetupStartTime;
    void lastBackgroundRefreshTime;
    void launchCorrelationKey;
    void launchFailureTime;
    void launchSuccessTime;
    void processStartTime;
    void requests;
    void wasMediaTokenExpired;
}

@end
