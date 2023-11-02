
@interface _HKBackgroundObservationExtensionRemoteContext : _HKBackgroundObservationExtensionContext <_HKBackgroundObservationExtensionRemoteXPCInterface> {
    HKBackgroundObservationExtension * _extensionInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKBackgroundObservationExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backgroundObservationExtensionTimeWillExpire;
- (void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)extensionInstance;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)performCleanup;
- (void)setExtensionInstance:(id)arg1;

@end
