
@interface STTelephonyStatusDomainDataProvider : NSObject <BSInvalidatable, STTelephonyStateObserver> {
    STTelephonyStatusDomainPublisher * _telephonyDomainPublisher;
    STTelephonyStateProvider * _telephonyStateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (id)initWithServerHandle:(id)arg1 stateProvider:(id)arg2;
- (id)initWithStateProvider:(id)arg1;
- (void)invalidate;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)stewieStateDidChangeForStateProvider:(id)arg1 usingStewieForSOS:(bool)arg2 isInactiveSOSEnabled:(bool)arg3;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;

@end
