
@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface> {
    HKElectrocardiogram * _electrocardiogram;
    long long  _lead;
    id /* block */  _sampleHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;

- (void).cxx_destruct;
- (void)_enumerateMeasurementsForElectrocardiogram:(id)arg1 handler:(id /* block */)arg2;
- (void)client_deliverData;
- (id)initWithElectrocardiogram:(id)arg1 dataHandler:(id /* block */)arg2;
- (id)initWithElectrocardiogram:(id)arg1 lead:(long long)arg2 dataHandler:(id /* block */)arg3;
- (id)initWithElectrocardiogram:(id)arg1 sampleHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
