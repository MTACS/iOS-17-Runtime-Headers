
@interface SBAvocadoDebuggingController : NSObject <SBExtensionHandling> {
    NSHashTable * _inFlightAnimationTransactions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptorForWidgetFromExtension:(id)arg1 forRequestedKind:(id)arg2 widgetFamily:(long long*)arg3 toolService:(id)arg4 error:(id*)arg5;
- (id)init;
- (void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)reallyLaunchToWidgetOnHomeScreenForDescriptor:(id)arg1 widgetFamily:(long long)arg2;

@end
