
@interface PDCPreflightManager : NSObject {
    <PDCConsentStore> * _consentStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <PDCConsentStore> *consentStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (bool)isPreflightFeatureEnabled;

- (void).cxx_destruct;
- (id)_preflightLaunchForApplication:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_requiresPreflightForApplication:(id)arg1;
- (bool)_requiresPreflightForApplicationRecord:(id)arg1;
- (id)consentStore;
- (id)initWithTargetQueue:(id)arg1;
- (id)initWithTargetQueue:(id)arg1 consentStore:(id)arg2;
- (id)preflightLaunchForApplication:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)queue;
- (bool)requiresPreflightForApplication:(id)arg1;
- (bool)requiresPreflightForApplicationRecord:(id)arg1;
- (void)setConsentStore:(id)arg1;
- (void)setQueue:(id)arg1;

@end
