
@protocol CTXPCServiceCellularUsagePolicyInterface

@required

- (void)interfaceCostExpensive:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isHighDataModeSupported:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isSmartDataModeSupportedWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)lowDataMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)overriddenInterfaceCostInexpensiveWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)privacyProxy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)reliableNetworkFallback:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)setInterfaceCost:(void *)arg1 expensive:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTServiceDescriptor *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLowDataMode:(void *)arg1 enable:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTServiceDescriptor *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setOverriddenInterfaceCostInexpensive:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPrivacyProxy:(void *)arg1 enabled:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTServiceDescriptor *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setReliableNetworkFallback:(void *)arg1 enable:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTServiceDescriptor *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSmartDataMode:(void *)arg1 enable:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTServiceDescriptor *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)smartDataMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
