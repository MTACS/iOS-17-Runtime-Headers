
@interface _HDDeferredFeaturePropertiesWriting : _HDFeaturePropertiesWriting {
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
}

- (void).cxx_destruct;
- (id)initWithLocalDomain:(id)arg1 pairedDeviceRegistry:(id)arg2;
- (void)synchronize;

@end
