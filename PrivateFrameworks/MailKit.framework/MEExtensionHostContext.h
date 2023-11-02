
@interface MEExtensionHostContext : NSExtensionContext <MEExtensionRemoteHostProtocol> {
    <MEMailComposeExtensionHostDelegate> * _composeExtensionHostDelegate;
}

@property (nonatomic) <MEMailComposeExtensionHostDelegate> *composeExtensionHostDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)extensionHostRequestScheduler;

- (void).cxx_destruct;
- (id)composeExtensionHostDelegate;
- (void)regenerateEmailAddressTokenChangesForSession:(id)arg1;
- (void)setComposeExtensionHostDelegate:(id)arg1;

@end
