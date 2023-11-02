
@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol> {
    <SFAirDropViewServiceHostProtocol> * _airDropHost;
}

@property (nonatomic) <SFAirDropViewServiceHostProtocol> *airDropHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)airDropExtensionService;
- (id)airDropHost;
- (void)airDropViewServiceDidFinishTransferWithSuccess:(bool)arg1;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceDidStartTransfer;
- (void)airDropViewServiceRequestingSendingAppBundleIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)airDropViewServiceWillStartTransferToRecipient:(id)arg1;
- (void)setAirDropHost:(id)arg1;

@end
