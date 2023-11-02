
@interface WFCatalystContentHostContext : NSExtensionContext <WFCatalystContentHost> {
    <WFCatalystContentHost> * _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <WFCatalystContentHost> *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)actionInterfaceListenerDidBecomeActive:(id)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;

@end
