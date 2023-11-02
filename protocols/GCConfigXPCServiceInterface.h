
@protocol GCConfigXPCServiceInterface

@required

- (void)connectToAssetManagementServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCConfigurationAssetManagementServiceXPCInterface> *, NSError *, void*
- (void)connectToGenericDeviceDBServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_GCGenericDeviceDBServiceXPCInterface> *, NSError *, void*

@end
