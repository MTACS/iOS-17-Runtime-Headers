
@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>

- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(id /* block */)arg1;
- (void)getApplicationCategoryIdentifiersSetWithCompletionHandler:(id /* block */)arg1;
- (void)getBoundIconInfoForDocumentProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(id /* block */)arg1;
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(id /* block */)arg1;
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(id /* block */)arg1;
- (void)getDiskUsage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(id /* block */)arg1;
- (void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)getKernelPackageExtensionsWithCompletionHandler:(id /* block */)arg1;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(id /* block */)arg1;
- (void)getPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)getResourceValuesForKeys:(id)arg1 mimic:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getServerStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getServerStoreNonBlockingWithCompletionHandler:(id /* block */)arg1;
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(id /* block */)arg1;
- (void)getSettingsStoreConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)getSystemContentStoreWithCompletionHandler:(id /* block */)arg1;
- (void)getSystemModeWithCompletionHandler:(id /* block */)arg1;
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getTypeRecordWithIdentifier:(id)arg1 allowUndeclared:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invokeServiceInvocation:(id)arg1 isReply:(bool)arg2;
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveQueries:(id)arg1 legacySPI:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
