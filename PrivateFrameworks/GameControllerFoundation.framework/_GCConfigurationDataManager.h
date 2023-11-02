
@interface _GCConfigurationDataManager : NSObject <NSObject> {
    NSMutableDictionary * _locators;
    <GCServiceProvider> * _provider;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurationBundleLocatorForType:(id)arg1;
- (id)init;
- (id)initWithProvider:(id)arg1;
- (id)serviceFor:(id)arg1 client:(id)arg2;

@end
