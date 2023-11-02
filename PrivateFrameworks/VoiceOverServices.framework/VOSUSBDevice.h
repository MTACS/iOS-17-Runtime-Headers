
@interface VOSUSBDevice : NSObject <VOSBluetoothConnectableDevice> {
    NSString * _address;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, retain) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (void)connect;
- (bool)connected;
- (bool)connecting;
- (void)disconnect;
- (id)identifier;
- (id)name;
- (bool)paired;
- (void)setAddress:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)unpair;

@end
