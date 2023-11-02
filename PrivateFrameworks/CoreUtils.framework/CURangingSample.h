
@interface CURangingSample : NSObject {
    int  _channel;
    NSData * _deviceAddress;
    NSString * _deviceModel;
    int  _rawRSSI;
}

@property (nonatomic) int channel;
@property (nonatomic, copy) NSData *deviceAddress;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic) int rawRSSI;

- (void).cxx_destruct;
- (int)channel;
- (id)description;
- (id)deviceAddress;
- (id)deviceModel;
- (int)rawRSSI;
- (void)setChannel:(int)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setRawRSSI:(int)arg1;

@end
