
@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {
    unsigned long long  _advertisementFormat;
    NSNumber * _category;
    NSNumber * _configNumber;
    unsigned long long  _connectionPriority;
    NSString * _identifier;
    double  _lastSeen;
    bool  _monitorState;
    bool  _notifyingCharacteristicUpdated;
    NSNumber * _stateNumber;
}

@property (nonatomic) unsigned long long advertisementFormat;
@property (nonatomic, retain) NSNumber *category;
@property (nonatomic, retain) NSNumber *configNumber;
@property (nonatomic) unsigned long long connectionPriority;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool monitorState;
@property (nonatomic) bool notifyingCharacteristicUpdated;
@property (nonatomic, retain) NSNumber *stateNumber;

- (void).cxx_destruct;
- (unsigned long long)advertisementFormat;
- (id)category;
- (id)configNumber;
- (unsigned long long)connectionPriority;
- (id)description;
- (id)identifier;
- (id)initRecentlySeenPairedHAPBLEPeripheral:(id)arg1;
- (bool)monitorState;
- (bool)notifyingCharacteristicUpdated;
- (void)setAdvertisementFormat:(unsigned long long)arg1;
- (void)setCategory:(id)arg1;
- (void)setConfigNumber:(id)arg1;
- (void)setConnectionPriority:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMonitorState:(bool)arg1;
- (void)setNotifyingCharacteristicUpdated:(bool)arg1;
- (void)setStateNumber:(id)arg1;
- (id)stateNumber;
- (void)updatePairedPeripheralConfiguration:(bool)arg1 connectionPriority:(unsigned long long)arg2;
- (void)updateWithPeripheral:(id)arg1;

@end
