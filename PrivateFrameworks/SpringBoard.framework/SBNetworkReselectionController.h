
@interface SBNetworkReselectionController : NSObject <STTelephonyStateObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void)_handleNetworkReselectionNeeded:(bool)arg1 forSlot:(long long)arg2;
- (void)_test;
- (void)dealloc;
- (id)init;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;

@end
