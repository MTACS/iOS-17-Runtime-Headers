
@interface TVRCSiriRemote : NSObject {
    CBCharacteristic * _findMyCharacteristic;
    CBPeripheral * _peripheral;
}

@property (nonatomic, retain) CBCharacteristic *findMyCharacteristic;
@property (nonatomic, retain) CBPeripheral *peripheral;

- (void).cxx_destruct;
- (id)findMyCharacteristic;
- (id)peripheral;
- (void)setFindMyCharacteristic:(id)arg1;
- (void)setPeripheral:(id)arg1;

@end
