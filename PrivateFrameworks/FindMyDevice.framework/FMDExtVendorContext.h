
@interface FMDExtVendorContext : FMDExtensionContext <FMDExtAccessoryProtocol> {
    <FMDExtAccessoryProtocol> * _accessoryProvider;
}

@property (nonatomic, retain) <FMDExtAccessoryProtocol> *accessoryProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryProvider;
- (void)connectionStatusForAccessory:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchAllAccessoriesInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)forwardInvocation:(id)arg1;
- (void)getStyleForAccessory:(id)arg1 info:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)safetyAlertForAccessory:(id)arg1 info:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setAccessoryProvider:(id)arg1;

@end
