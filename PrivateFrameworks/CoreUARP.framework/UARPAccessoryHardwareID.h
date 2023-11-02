
@interface UARPAccessoryHardwareID : NSObject {
    long long  _transport;
}

@property (readonly) long long transport;

- (id)init;
- (id)initWithTransport:(long long)arg1;
- (long long)transport;

@end
