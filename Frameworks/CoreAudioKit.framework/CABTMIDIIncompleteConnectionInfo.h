
@interface CABTMIDIIncompleteConnectionInfo : NSObject {
    bool  _connecting;
    AMSBTLEPeripheral * _peripheral;
    unsigned long long  _timeOutInterval;
}

@property (getter=isConnecting) bool connecting;
@property (nonatomic, retain) AMSBTLEPeripheral *peripheral;
@property unsigned long long timeOutInterval;

- (void)dealloc;
- (id)initWithPeripheral:(id)arg1 isConnecting:(bool)arg2;
- (bool)isConnecting;
- (id)peripheral;
- (void)setConnecting:(bool)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setTimeOutInterval:(unsigned long long)arg1;
- (unsigned long long)timeOutInterval;

@end
