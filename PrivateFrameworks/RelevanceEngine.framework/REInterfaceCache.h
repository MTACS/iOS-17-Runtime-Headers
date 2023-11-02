
@interface REInterfaceCache : RESingleton {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _supportedInterfaces;
}

- (void).cxx_destruct;
- (id)_accessInterfaceForKey:(id)arg1;
- (void)_enumerateMethodsOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumeratePropertiesOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)_init;
- (bool)_interface:(id)arg1 implementsInterface:(id)arg2;
- (id)_queue_valueForKey:(id)arg1 level:(unsigned long long)arg2;
- (id)_supportedProtocols;
- (bool)_supportsCache;
- (void)enumerateExportedMethodsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateExportedMethodsOfProtocol:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateExportedPropertiesOfClass:(Class)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateExportedPropertiesOfProtocol:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)exportedInterfaceClass:(Class)arg1;
- (bool)exportedInterfaceProtocol:(id)arg1;

@end
