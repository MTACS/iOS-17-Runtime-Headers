
@interface StateReplicator.ConcreteIDSDependency : NSObject <IDSServiceDelegate> {
    void $__lazy_storage_$_accountsChanged;
    void $__lazy_storage_$_devicesChanged;
    void $__lazy_storage_$_localDeviceID;
    void _accountsChanged;
    void _devicesChanged;
    void _localDeviceID;
    void service;
    void serviceName;
}

- (void).cxx_destruct;
- (id)init;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;

@end
