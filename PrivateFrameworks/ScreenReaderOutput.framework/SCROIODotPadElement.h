
@interface SCROIODotPadElement : SCROIOElement <SCROIOBTLESerialElementProtocol> {
    CBCentralManager * _central;
    int  _identifier;
    CBPeripheral * _peripheral;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) CBCentralManager *central;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)central;
- (id)dotFamilyIdentifier;
- (int)identifier;
- (id)initWithCentral:(id)arg1 peripheral:(id)arg2;
- (id)name;
- (id)peripheral;
- (int)transport;

@end
