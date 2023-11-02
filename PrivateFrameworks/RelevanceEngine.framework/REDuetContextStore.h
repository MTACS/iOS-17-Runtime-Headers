
@interface REDuetContextStore : RESingleton {
    <_CDUserContext> * _context;
    NSMutableDictionary * _registrations;
}

- (void).cxx_destruct;
- (id)_init;
- (id)isConnectedToAudioBluetoothDeviceQuery;
- (id)isConnectedToCarQuery;
- (void)registerForQuery:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)unregisterForQuery:(id)arg1;

@end
