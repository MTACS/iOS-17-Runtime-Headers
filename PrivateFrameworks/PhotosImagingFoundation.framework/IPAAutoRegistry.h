
@interface IPAAutoRegistry : NSObject {
    NSMutableDictionary * _entries;
    NSObject<OS_dispatch_queue> * _serializer;
}

+ (void)setSharedRegistry:(id)arg1;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (bool)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;
- (id)init;
- (bool)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2;
- (void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3;
- (void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 persistable:(bool)arg4;
- (Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2;

@end
