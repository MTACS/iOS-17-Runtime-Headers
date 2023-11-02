
@interface CSBluetoothDeviceInfo : NSObject {
    NSString * _address;
    NSString * _deviceIdentifier;
    bool  _isTemporaryPairedNotInContacts;
    bool  _supportDoAP;
    bool  _supportMph;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) bool isTemporaryPairedNotInContacts;
@property (nonatomic) bool supportDoAP;
@property (nonatomic) bool supportMph;

- (void).cxx_destruct;
- (id)address;
- (id)deviceIdentifier;
- (bool)isTemporaryPairedNotInContacts;
- (void)setAddress:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIsTemporaryPairedNotInContacts:(bool)arg1;
- (void)setSupportDoAP:(bool)arg1;
- (void)setSupportMph:(bool)arg1;
- (bool)supportDoAP;
- (bool)supportMph;

@end
