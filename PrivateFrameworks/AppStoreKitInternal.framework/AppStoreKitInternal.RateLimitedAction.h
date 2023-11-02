
@interface AppStoreKitInternal.RateLimitedAction : AppStoreKitInternal.Action {
    void actionKey;
    void fallbackAction;
    void primaryAction;
    void rateLimit;
}

@end
