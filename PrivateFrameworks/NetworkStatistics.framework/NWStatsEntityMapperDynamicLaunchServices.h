
@interface NWStatsEntityMapperDynamicLaunchServices : NWStatsEntityMapperNEHelper {
    Class  _LSApplicationProxyClass;
    Class  _LSApplicationWorkspaceClass;
    Class  _LSPlugInKitProxyClass;
    void * _coreServicesDylibHandle;
    NWStatsEntityMapCache * _entityMap;
}

- (void).cxx_destruct;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)arg1;
- (id)_identifierForUUID:(id)arg1 fromSet:(id)arg2;
- (void)dealloc;
- (id)extensionNameForUUID:(id)arg1;
- (id)handleNewUUID:(id)arg1;
- (id)identifierForUUID:(id)arg1 derivation:(int*)arg2;
- (id)init;
- (id)stateDictionary;

@end
