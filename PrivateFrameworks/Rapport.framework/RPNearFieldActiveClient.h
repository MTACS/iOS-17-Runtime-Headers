
@interface RPNearFieldActiveClient : RPNearFieldClient <_DDNearFieldActiveClient>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ failedDiscovery;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport

- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)arg1;
- (void)startDiscoveryWithApplicationLabel:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/DeviceDiscoveryUI.framework/DeviceDiscoveryUI

- (void)setSwiftTapEventHandler:(id /* block */)arg1;

@end
